#include <iostream>
#include "Book.hpp"
#include "Library.hpp"
using namespace std;

//PHASE 1 - TESTING

void phase1_test1()
{
	Book book1;
	book1.SetBookInfo("CS 200", "Ramish Nadeem");
	cout << book1.GetTitle() << endl;
	cout << book1.GetAuthor() << endl;
}

void phase1_test2()
{
	Book book2;
	book2.SetPurchaseStatus(OWNED);
	cout << book2.GetPurchaseStatus() << endl;
	cout << book2.GetPurchaseStatusString() << endl;

}

void phase1_test3()
{
	Book book3;
	book3.SetReadingStatus(READING);
	cout << book3.GetReadingStatusString() << endl;
	cout << book3.GetReadingStatus() << endl;
}

void phase1_test4()
{
	Book book4;
	book4.SetBookInfo("CS 200", "Ramish Nadeem");
	book4.SetReadingStatus(READING);
	book4.SetPurchaseStatus(OWNED);
	book4.DisplayBook();
}

//PHASE 2 - TESTING

void phase2_test1()
{
	Library lib1;
	lib1.DeallocateMemory();
	lib1.AllocateMemory(30);
	cout << lib1.GetArraySize() << endl;
}

void phase2_test2()
{
	Library lib2;
	lib2.DeallocateMemory();
	lib2.AllocateMemory(20);
	lib2.ResizeArray();
	cout << lib2.GetArraySize() << endl;
}

//PHASE 3 - TESTING

void phase3_test1()
{
	Library test1;
	test1.NewBook();
	test1.ViewAllBooks();
}

void phase3_test2()
{
	Library test2;
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.NewBook();
	test2.ViewAllBooks();
}

void phase3_test3()
{
	Library lib3;
	lib3.NewBook();
	lib3.NewBook();
	lib3.NewBook();
	lib3.UpdateBook();
	lib3.ViewAllBooks();
}

void phase3_test4()
{
	Library lb;
	lb.NewBook();
	lb.NewBook();
	lb.NewBook();
	lb.NewBook();
	lb.NewBook();
	lb.ViewStats();
}

//PHASE 4 - TESTING

void phase4_test1()
{
	Library loadData;
	loadData.NewBook();
	loadData.NewBook();
	loadData.ViewAllBooks();
}


int main()
{
	Library library;
	library.Run();
	return 0;
}