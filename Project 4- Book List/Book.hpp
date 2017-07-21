#ifndef _BOOK_HPP
#define _BOOK_HPP

#include <iostream>
#include <string>
using namespace std;

enum ReadingStatus {NOT_STARTED = 0, READING = 1, FINSIHED = 2};
enum PurchaseStatus { OWNED = 0, WISHLIST = 1 };


class Book
{
public:
	void SetBookInfo(string title, string author);
	void SetReadingStatus(ReadingStatus rs);
	void SetPurchaseStatus(PurchaseStatus ps);
	void DisplayBook();

	string GetTitle();
	string GetAuthor();
	int GetReadingStatus();
	string GetReadingStatusString();
	int GetPurchaseStatus();
	string GetPurchaseStatusString();

private:
	string m_title;
	string m_author;
	ReadingStatus m_readingStatus;
	PurchaseStatus m_purchaseStatus;
};
#endif


