/**
* @file Book.h
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Book
*
* With This file, we added book
*/
#pragma once
#include "Product.h"
#include <string>  
#include <iostream>
using namespace std;
class Book : public Product      
{
private:
	string author;/*!< author */ 		
	string publisher;/*!<publisher */ 
	int page;/*!<number of pages of the book */ 
public:
	//!Constructer
	Book(int, string, double, string, string, int);   
	//!Destructer
	~Book();
	//! print Book object
	virtual void printProperties() const;	
	//! set author
	void setAuthor(string);
	//! return author
	string getAuthor() const; 
	//! set publisher
	void setPublisher(string); 
	//! return publisher
	string getPublisher() const; 
	//! set number of pages
	void setPage(int); 
	//! return number of pages
	int getPage() const; 
};