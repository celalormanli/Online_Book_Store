/**
* @file 	Payment.h
* @Author 	Kadyr AGANIYAZOV (kadyraganiyazow@gmail.com)
* @date 	January, 2017
* @brief 	Payment Header File
* 
* Detailed description of file.
*/
#pragma once
class Payment {
	//! an amount to pay
	double amount;
public:
	//! A constructor. 
	Payment();
	//! A destructor. 
	~Payment();
	//!payment
	Payment(double);
	//!Get Amount
	double getAmount();
	//!Set Amount
	void setAmount(double amount);
	//!Perform Payment
	virtual void performPayment() = 0;
};

