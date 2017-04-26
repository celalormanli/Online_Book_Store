/**
* @file  	Check.h
* @Author 	Kadyr AGANIYAZOV (kadyraganiyazow@gmail.com)
* @date		January, 2017
* @brief 	Check Header File
* 
* Detailed description of file.
*/
#pragma once
#include <string>
#include "Payment.h"
using namespace std;
class Check :public Payment
{
public:
	//!Constructer
	Check(string NAME, string BANKID,double);
	//! A destructor.
	~Check();
	//*Perform Payment
	void performPayment();
	//!Get Name
	string getName();
	//!Set Name
	void setName(string name);
	//!Get Bank Id
	string getBankID();
	//!Set Bank Id
	void setBankID(string bankID);
private:
	string name;	/*!< name of the check owner */
	string bankID;	/*!< bankID of the check */
};

