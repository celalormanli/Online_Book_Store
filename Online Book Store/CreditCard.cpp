/**
* @file	    CreditCard.cpp
* @Author 	Kadyr AGANIYAZOV (kadyraganiyazow@gmail.com)
* @date 	January, 2017
* @brief 	CreditCard C++ File
* 
* Detailed description of file.
*/
#include "CreditCard.h"
#include<iostream>
using namespace std;
/*!
\param NUM a long argument.
\param TYPE a string argument.
\param EXPDATE a string argument.
\param PRICE a double argument.
\constructer
*/
CreditCard::CreditCard(long NUM, string TYPE, string EXPDATE,double PRICE):number(NUM),type(TYPE),expDate(EXPDATE),Payment(PRICE)
{
}
/*!destructer*/
CreditCard::~CreditCard()
{
}
/*!
	\return the number of a Credit Card.
*/
long CreditCard::getNumber()
{
	return number;
}
/*!
\param numberr a long argument.
\sets the number of a Credit Card.
*/
void CreditCard::setNumber(long numberr) 
{
	number = numberr;
}
/*!
	\gets type of a Credit Card.
*/
string CreditCard::getType() 
{
	return type;
}
/*!
\param typee an string argument.
\sets type of a Credit Card.
*/
void CreditCard::setType(string typee) 
{
	type = typee;
}
/*!
	\gets Expiration date of a Credit Card.
*/
string CreditCard::getExpDate() 
{
	return expDate;
}
/*!
\param expDatee a string argument.
\sets Expiration date of a Credit Card.
*/
void CreditCard::setExpDate(string expDatee)
{
	expDate = expDatee;
}/*!
	\performs payment with a Credit Card.
*/
void CreditCard::performPayment() 
{
	cout << getAmount() << "TL Paid with Credit Card" << endl;
}