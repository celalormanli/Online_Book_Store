/**
* @file Product.cpp
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Product
*
* With This file, we added Product
*/
#include "Product.h"
/*! default constructor*/
Product::Product()
{
}
/*! 
\param ID an Integer argument.
\param name a string argument.
\param price a double argument.
\constructor*/
Product::Product(int ID, string name, double price) :ID(ID), name(name), price(price)
{
}
/*! destructor*/
Product::~Product() 
{
}
/*!
\param Id an Integer argument.
\set product ID
*/
void Product::setID(int Id)
{
	ID = Id;
}
/*! return ID*/
int Product::getID() const
{
	return ID;
} 
/*!
\param namee a string argument.
\set name
*/
void Product::setName(string namee)
{
	name = namee;
}
/*! return name*/
string Product::getName() const
{
	return name;
}
/*! 
\param pricee a double argument.
\set price
*/
void Product::setPrice(double pricee)
{
	price = pricee;
}
/*!
\param id an Integer argument.
\check product ID
*/
bool Product::CheckID(int id)
{
	if (id == ID)
	{
		return true;
	}
	return false;
}
/*! return price*/
double Product::getPrice() const
{
	return price;
}
/*! print Product's information*/
void Product::printProperties() const
{
	cout << "The Product ID :" << getID() << endl;
	cout << "The Product name :" << getName() << endl;
	cout << "The Product price :" << getPrice()<<" TL" << endl;
}