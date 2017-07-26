#ifndef _LIBRARY_HPP
#define _LIBRARY_HPP
#include "Book.hpp"


class Library
{
private:
	Book* m_bookList;
	int m_arraySize;
	int m_bookCount;

public:
	Library();
	~Library();
	void DeallocateMemory();
	void AllocateMemory(int size);
	void ResizeArray();
	int GetArraySize();
	int GetBookCount();
	bool IsArrayFull();
	void Run();
	void MainMenu();
	void NewBook();
	void UpdateBook();
	void DisplayBooksWithIndex();
	void ViewAllBooks();
	void ViewStats();
	void SaveData();
	void LoadData();
	void ExportWishlist();
	void ExportFullList();
	void ExportReadingList();
};

#endif