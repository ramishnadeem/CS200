#include <iostream>
#include "Book.hpp"
using namespace std;


void phase1_test1()
{
	Book book;
	book.SetBookInfo("The Hobbit" , "Ramish Nadeem");
	book.GetTitle();
	book.GetAuthor();
	book.DisplayBook();
}

void phase2_test2()
{
	Book books;
	books.SetBookInfo("The Hobbit", "Ramish Nadeem");
	books.GetTitle();
	books.GetAuthor();
	books.SetPurchaseStatus(WISHLIST);
	books.GetPurchaseStatus();
	books.GetPurchaseStatusString();
	books.DisplayBook();
}




int main()
{
	phase2_test2();
	return 0;
}