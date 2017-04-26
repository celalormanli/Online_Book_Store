/**
* @file  	CreditCard.h
* @Author 	Kadyr AGANIYAZOV (kadyraganiyazow@gmail.com)
* @date		January, 2017
* @brief 	CreditCard Header File
* 
* Detailed description of file.
*/
#pragma once
#include <string>
#include "Payment.h"
using namespace std;
class CreditCard :public Payment
{
public:
	//! A constructor. 
	CreditCard(long NUM, string TYPE, string EXPDATE,double);
	//! A destructor. 
	~CreditCard();
	//!Get Number
	long getNumber();
	//!Set Number
	void setNumber(long number);
	//!Get Type
	string getType();
	//!Set Type
	void setType(string type);
	//!Get Expdate
	string getExpDate();
	//!Set ExpDate
	void setExpDate(string expDate);
	//!Perform Payment
	void performPayment();
private:
	long number;/*!< Credit Card number */	 
	string type; /*!< Credit Card type (master/visa) */
	string expDate; /*!< Credit Card expiration date */
};

