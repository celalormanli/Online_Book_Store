/**
* @file Product.h
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Product
*
* With This file, we added Product
*/
#pragma once
#include <string>  
#include <iostream>
using namespace std;
class Product {													
private:
	int ID;/*!< ID */ 							
	string name;/*!< name */ 
	double price;/*!< price */ 
public:						
	//!consturcter
	Product();
	//!constructer
	Product(int, string, double);
	//!destructer
	~Product();
	//! return product ID
	int getID() const;    
	//! set product ID
	void setID(int);	 
	//! return name
	string getName() const; 
	//! set name
	void setName(string);	
	//! return price
	double getPrice() const;	
	//! set price
	void setPrice(double);		
	//! check ID
	bool CheckID(int);			
	//! print Product object
	virtual void printProperties() const ;				
};
