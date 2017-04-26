/**
* @file Magazine.h
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Magazine
*
* With This file, we added Magazine
*/
#pragma once
#include "Product.h"
#include <string> 
#include <iostream>
using namespace std;
class Magazine : public Product								
{
private:
	int issue;/*!<issue*/ 									
	string type;/*!<type*/ 
public:
	//!Constructer
	Magazine(int, string, double, int, string);				
	//!Destructer
	~Magazine();
	//! print Magazine object
	virtual void printProperties() const; 
	 //! return issue
	int getIssue() const; 
	 //! setissue
	void setIssue(int);		
	//! return type
	string getType() const; 
	//! set type
	void setType(string);   
};