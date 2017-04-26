/**
* @file 	Payment.cpp
* @Author 	Kadyr AGANIYAZOV (kadyraganiyazow@gmail.com)
* @date 	January, 2017
* @brief 	Payment C++ File
* 
* Detailed description of file.
*/
#include "Payment.h"
#include "CreditCard.h"
#include "Cash.h"
#include "Check.h"
/*!Constructer*/
Payment::Payment()
{
}
/*!Destructer*/
Payment::~Payment()
{
}
/*! 
 \param PRICE a double argument.
*/
Payment::Payment(double PRICE):amount(PRICE)
{

}
/*!Get Amount*/
double Payment::getAmount()
{
	return amount;
}
/*!
\param amountt a double argument.
*/
void Payment::setAmount(double amountt)
{
amount = amountt;
}