/**
* @file Book.cpp
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Book
*
* With This file, we added Book
*/
#include "Book.h"  
/*!
\param ID an Integer argument.
\param name a string argument.
\param price a double argument.
\param author a string argument.
\param publiser a string argument.
\param page an Integer argument.
\constructor
*/
Book::Book(int ID, string name, double price, string author, string publisher, int page) :Product(ID, name, price), author(author), publisher(publisher), page(page) 
{																	
												
}
/*! destructor*/
Book::~Book() {									
}
/*!
\param author a string argument.
\ set author*/
void Book::setAuthor(string author)				
{
	author = author;
}
/*!return author*/
string Book::getAuthor() const
{
	return author;
}
/*!
\param name a string argument.
\set publisher*/
void Book::setPublisher(string name)
{
	publisher = publisher;
}
 /*! return publisher*/
string Book::getPublisher() const
{
	return publisher;
}
/*!
\param page a Integer argument.
\set page*/
void Book::setPage(int page)
{
	page = page;
}
/*! return page number*/
int Book::getPage() const
{
	return page;
}
/*! print Book's information*/
void Book::printProperties() const					
{
	Product::printProperties();						
	cout << "Author :" << getAuthor() << endl;
	cout << "Publisher :" << getPublisher() << endl;
	cout << "Page :" << getPage() << endl;
}