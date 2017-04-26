/**
* @file 	Cash.cpp
* @Author 	Kadyr AGANIYAZOV (kadyraganiyazow@gmail.com)
* @date 	January, 2017
* @brief 	Cash c++ File
* 
* Detailed description of file.
*/
#include "Cash.h"
#include<iostream>
using namespace std;
/*! A constructor.*/
Cash::Cash()
{
}
/*!
\param PRICE a double argument.
\Constructer*/
Cash::Cash(double PRICE):Payment(PRICE) 
{
}
/*!A destructor.*/
Cash::~Cash()
{
}
/*! function performs cash payment*/
void Cash::performPayment() 
{
	cout <<getAmount()<< "TL Paid with Cash" << endl;
}