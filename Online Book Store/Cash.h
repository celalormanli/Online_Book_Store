/**
* @file 	Cash.h
* @Author 	Kadyr AGANIYAZOV (kadyraganiyazow@gmail.com)
* @date 	January, 2017
* @brief 	Cash Header File
* 
* Detailed description of file.
*/
#pragma once
#include "Payment.h"
class Cash :public Payment
{
public:
    //! A constructor. 
	Cash();
	//* A destructer
	Cash(double);
	//! A destructor. 
	~Cash();
	//* Perform payment
	void performPayment();
};