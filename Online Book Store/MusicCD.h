/**
* @file MusicCD.h
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of MusicCD
*
* With This file, we added MusicCD
*/
#pragma once
#include "Product.h" 
#include <string>	
#include <iostream>
using namespace std;
class MusicCD : public Product										
{
private:															
	string singer; /*!< singer*/ 
	string type; /*!< type*/ 
public:																
	//!Constructer
	MusicCD(int, string, double, string, string);
	//!Destructer
	~MusicCD();
	//! print MusicCD object
	virtual void printProperties() const;  
	//! set singer
	void setSinger(string);
	//! return singer
	string getSinger() const;
	//! set Type
	void setType(string); 
	//! return type
	string getType() const; 
};
