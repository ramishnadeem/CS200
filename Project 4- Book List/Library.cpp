#include "Library.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


Library::Library()
{
	m_bookList = nullptr;
	m_arraySize = 0;
	m_bookCount = 0;
	AllocateMemory(10);
}
Library::~Library()
{
	DeallocateMemory();
}

void Library::DeallocateMemory()
{
	if (m_bookList != nullptr)
	{
		delete[] m_bookList;
		m_bookList = nullptr;
		m_arraySize = 0;
		m_bookCount = 0;
	}
}

void Library::AllocateMemory(int size)
{
	if (m_bookList == nullptr)
	{
		DeallocateMemory();
		m_bookList = new Book[size];
		m_arraySize = size;
	}
}

void Library::ResizeArray()
{
	Book* BiggerArray = new Book[m_arraySize + 10];
	for (int i = 0; i < m_arraySize; i++)
	{
		BiggerArray[i] = m_bookList[i];
	}
	delete[] m_bookList;
	m_bookList = BiggerArray;
	BiggerArray = NULL;
	m_arraySize += 10;
}

int Library::GetArraySize()
{
	return m_arraySize;
}

int Library::GetBookCount()
{
	return m_bookCount;
}

bool Library::IsArrayFull()
{
	if (m_arraySize == m_bookCount)
	{
		return true;
	}
	return false;
}


void Library::Run()
{
	LoadData();
	MainMenu();
}

void Library::DisplayBooksWithIndex()
{
	for (int i = 0; i < m_bookCount; i++)
	{
		cout << i << ". " << m_bookList[i].GetTitle() << "   " << m_bookList[i].GetAuthor() << endl;
	}
}

void Library::MainMenu()
{
	bool isDone = false;
	int choice;
	while (!isDone)
	{
		cout << endl;
		cout << "LIBRARY MAIN MENU" << endl;
		cout << "---------------------------------------" << endl;
		cout << "1. Add New Book " << endl;
		cout << "2. Update Book " << endl;
		cout << "3. View Stats " << endl;
		cout << "4. View All Books " << endl;
		cout << "5. Export Wishlist " << endl;
		cout << "6. Get Full List " << endl;
		cout << "7. Export Reading List " << endl;
		cout << "8. Save and Quit " << endl;
		cout << "What do you want to do?: ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 1:
			NewBook();
			break;
		case 2: {
			UpdateBook();
			break;
		}
		case 3:
			ViewStats();
			break;
		case 4:
		{
			ViewAllBooks();
			break;
		}
		case 5:
		{
			ExportWishlist();
			break;
		}
		case 6:
		{
			ExportFullList();
			break;
		}
		case 7:
		{
			ExportReadingList();
			break;
		}
		case 8:
			isDone = true;
			break;

		}

	}

	SaveData();

}

void Library::NewBook()
{
		cout << endl;
		cout << "Add New Book" << endl;
		cout << "---------------------------------------" << endl;
		if (IsArrayFull() == true)
		{
			ResizeArray();
		}
		string title;
		string author;
		int rs, ps;

		cout << "Enter Book Title:";
		getline(cin, title);


		cout << "Enter Book Author:";
		getline(cin, author);

		cout << "What is the reading status?: " << endl
			<< "0. NOT STARTED " << "   " << "1. READING " << " " << "2. FINISHED " << endl;
		cin >> rs;

		cout << "What is the Purchase Status?: " << endl
			<< "0. OWNED " << " " << "1. WISHLIST " << endl;
		cin >> ps;

		m_bookList[m_bookCount].SetBookInfo(title, author);
		m_bookList[m_bookCount].SetReadingStatus(ReadingStatus(rs));
		m_bookList[m_bookCount].SetPurchaseStatus(PurchaseStatus(ps));
		m_bookCount++;
}

	void Library::UpdateBook()
	{
		cout << endl;
		cout << "Update New Book" << endl;
		cout << "-----------------------------------------" << endl;
		int index;
		char choice;
		DisplayBooksWithIndex();
		cout << "Update which book?:        ";
		cin >> index;
		cout << "-----------------" << endl;
		cout << "(a). Title ";
		cout << "(b). Author ";
		cout << "(c). Reading status ";
		cout << "(d). Purchase status " << endl;
		cout << ">> ";
		cin >> choice;
		cin.ignore();
		if (choice == 'a')
		{
			string title, author;
			cout << "Enter New Title: ";
			getline(cin, title);
			author = m_bookList[index].GetAuthor();
			m_bookList[index].SetBookInfo(title, author);
		}
		else if (choice == 'b')
		{
			string author, title;
			cout << "Enter New Author: ";
			getline(cin, author);
			title = m_bookList[index].GetTitle();
			m_bookList[index].SetBookInfo(title, author);
		}
		else if (choice == 'c')
		{
			int rs;
			cout << "What is the reading status?: " << endl
				<< "0. NOT STARTED " << "   " << "1. READING " << " " << "2. FINISHED " << endl;
			cin >> rs;
			m_bookList[index].SetReadingStatus(ReadingStatus(rs));

		}
		else if (choice == 'd')
		{
			int ps;
			cout << "What is the new purchase status?: " << endl
				<< "0. OWNED " << " " << "1. WISHLIST " << endl;
			cin >> ps;
			m_bookList[index].SetPurchaseStatus(PurchaseStatus(ps));
		}



	}

	void Library::ViewAllBooks()
	{
		for (int i = 0; i < m_bookCount; i++)
		{
			m_bookList[i].DisplayBook();
		}
	}

	void Library::ViewStats()
	{
		int booksOwned = 0, booksOnWishlist = 0, booksFinished = 0, booksCurrentlyReading = 0, booksNotStarted = 0;

		for (int i = 0; i<m_bookCount; i++)
		{
			if (m_bookList[i].GetPurchaseStatus() == OWNED)
			{
				booksOwned++;
			}

			if (m_bookList[i].GetPurchaseStatus() == WISHLIST)
			{
				booksOnWishlist++;
			}

			m_bookList[i].GetReadingStatus();

			if (m_bookList[i].GetReadingStatus() == READING)
			{
				booksCurrentlyReading++;
			}

			if (m_bookList[i].GetReadingStatus() == FINSIHED)
			{
				booksFinished++;
			}

			if (m_bookList[i].GetReadingStatus() == NOT_STARTED)
			{
				booksNotStarted++;
			}

		}

		cout << "Total Books: " << m_bookCount << endl;
		cout << endl;
		cout << endl;
		cout << "Books Owned: " << booksOwned << endl;
		cout << "Books Wishlisted: " << booksOnWishlist << endl;
		cout << endl;
		cout << endl;
		cout << "Books Not Started: " << booksNotStarted << endl;
		cout << "Books Reading: " << booksCurrentlyReading << endl;
		cout << "Books Finished: " << booksFinished << endl;
	}


void Library::SaveData()
 {
	ofstream output;
	output.open("books.txt");
	for (int i = 0; i < m_bookCount; i++)
	{
		output << "BOOK" << i << endl;
		output << m_bookList[i].GetTitle() << endl;
		output << m_bookList[i].GetAuthor() << endl;
		output << m_bookList[i].GetReadingStatus() << endl;
		output << m_bookList[i].GetPurchaseStatus() << endl;
	}

	output.close();
}

	void Library::LoadData()
	{
		ifstream input("books.txt");
		string header;
		string title, author;
		int rs, ps;

		while (input >> header)
		{
			input.ignore();
			getline(input, title);
			getline(input, author);
			input >> rs;
			input >> ps;
			if (IsArrayFull())
			{
				ResizeArray();
			}

			m_bookList[m_bookCount].SetBookInfo(title, author);
			m_bookList[m_bookCount].SetPurchaseStatus(PurchaseStatus(ps));
			m_bookList[m_bookCount].SetReadingStatus(ReadingStatus(rs));

			m_bookCount++;
		}

		input.close();
	}

	void Library::ExportWishlist()
	{
		ofstream wishlist;
		wishlist.open("wishlist.txt");
		wishlist << "Wishlist " << endl;
		for (int i = 0; i < m_bookCount; i++)
		{
			if (m_bookList[i].GetPurchaseStatus() == WISHLIST)
			{
				wishlist << "BOOK" << i << endl;
				wishlist <<  "Book: " << m_bookList[i].GetTitle() << endl;
				wishlist <<  "Author: " << m_bookList[i].GetAuthor() << endl;
			}
		}

		wishlist.close();
	}

	void Library::ExportFullList()
	{
		ofstream fullList;
		fullList.open("list.txt");
		fullList << "List of all books " << endl;
		for (int i = 0; i < m_bookCount; i++)
		{
			fullList << "BOOK" << i << endl;
			fullList << "Title: " << m_bookList[i].GetTitle() << endl;
			fullList << "Author: " <<m_bookList[i].GetAuthor() << endl;
			fullList << "Reading Status: " << m_bookList[i].GetReadingStatusString() << endl;
			fullList << "Purchase Status: " << m_bookList[i].GetPurchaseStatusString() << endl;
		}

		fullList.close();
	}

	void Library::ExportReadingList()
	{
		ofstream readingList;
		readingList.open("readingList.txt");
		readingList << "Reading List " << endl << endl;
		for (int i = 0; i < m_bookCount; i++)
		{
			if (m_bookList[i].GetPurchaseStatus() == READING)
			{
				readingList << "BOOK" << i << endl;
				readingList << "Book: " << m_bookList[i].GetTitle() << endl;
				readingList << "Author: " << m_bookList[i].GetAuthor() << endl;
			}
		}

		readingList.close();
	}

