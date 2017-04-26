/**
* @file Magazine.cpp
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Magazine
*
* With This file, we added Magazine
*/
#include "Magazine.h" 
using namespace std;
/*! 
\param ID an Integer argument.
\param name a string argument.
\param price a double argument.
\param issue an Integer argument.
\param type a string argument.
\constructor
*/
Magazine::Magazine(int ID, string name, double price, int issue, string type) : Product(ID, name, price), issue(issue), type(type)
{
}
/*! destructor*/
Magazine::~Magazine() 
{
}						
/*! 
\param issue an Integer argument.
\set issue
*/
void Magazine::setIssue(int issue)				
{
	issue = issue;
}
/*! return issue*/
int Magazine::getIssue() const
{
	return issue;
}
/*!
\param type a string argument.
\set Type
*/
void Magazine::setType(string type)
{
	type = type;
}
/*! return type*/
string Magazine::getType() const
{
	return type;
}
/*! Print Magazine's information*/
void Magazine::printProperties() const					
{
	Product::printProperties();							
	cout << "Issue is :" << issue << endl;
	cout << "Type :" << type << endl;
}