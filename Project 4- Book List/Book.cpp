#include "Book.hpp"
#include <string>
#include <iostream>
using namespace std;

void Book::SetBookInfo(string title, string author)
{
	m_title = title;
	m_author = author;
}

void Book::SetReadingStatus(ReadingStatus rs)
{
	m_readingStatus = rs;
}

void Book::SetPurchaseStatus(PurchaseStatus ps)
{
	m_purchaseStatus = ps;
}

void Book::DisplayBook()
{
	cout << endl;
	cout << "Title: " << m_title << endl;
	cout << "Author:" << m_author << endl;
	cout << "Purchase Status:" << GetPurchaseStatusString() << endl;
	cout << "Reading Status:" << GetReadingStatusString() << endl;
	cout << endl;
}

string Book::GetTitle()
{
	return m_title;
}

string Book::GetAuthor()
{
	return m_author;
}

int Book::GetReadingStatus()
{
	return m_readingStatus;
}

string Book::GetReadingStatusString()
{
	if (m_readingStatus == NOT_STARTED)
	{
		return "Not Started";
	}
	else if (m_readingStatus == READING)
	{
		return "Reading";
	}
	else if (m_readingStatus == FINSIHED)
	{
		return "Finished";
	}

	return "";
}


int Book::GetPurchaseStatus()
{
	return m_purchaseStatus;
}

string Book::GetPurchaseStatusString()
{
	if (m_purchaseStatus == OWNED)
	{
		return ("Owned");
	}
	else if (m_purchaseStatus == WISHLIST)
	{
		return "Wishlist";
	}

	return "";
}

