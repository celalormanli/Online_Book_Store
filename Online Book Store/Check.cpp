/**
* @file 	Check.cpp
* @Author 	Kadyr AGANIYAZOV (kadyraganiyazow@gmail.com)
* @date 	January, 2017
* @brief 	Check C++ File
* 
* Detailed description of file.
*/
#include "Check.h"
#include<iostream>
using namespace std;
/*!
\param NAME a string argument.
\param BANKID a string argument.
\param PRICE a double argument.
\constructer
*/
Check::Check(string NAME, string BANKID,double PRICE) :name(NAME), bankID(BANKID),Payment(PRICE)
{
}
/*!destructer*/
Check::~Check()
{
}
/*!Perform Payment*/
void Check::performPayment()
{
	cout << getAmount() << "TL Paid with Check" << endl;
}
/*!
	\return the name of a check owner.
*/ 
string Check::getName()
{
	return name;
}
/*!
\param namee a string argument.
\sets the name of a check owner .
*/
void Check::setName(string namee) 
{
	name = namee;
}
/*!
	\return the bankID of a check.
*/
string Check::getBankID() 
{
	return bankID;
}/*!
 \param bankIDD a string argument.
\set the bankID of a check.
*/
void Check::setBankID(string bankIDD)
{
	bankID = bankIDD;
}
