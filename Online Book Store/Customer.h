/**
* @file Customer.h
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Customer
*
* With This file, we added and used Customer
*/
#pragma once
#include <string>
#include <algorithm> 
#include <iostream>  
using namespace std;
class Customer
{
private:
long customerID;/*!< customer ID*/ 
string name;/*!< customer name*/ 
string address;	/*!< customer address*/ 
string phone;/*!< customer's phone number*/ 
double bonus;/*!< bonus*/ 
string email;/*!< customer's email address*/ 
string username;/*!< username for login*/ 
string password;/*!< customer's password to enter the system*/ 
public:
//!Constructer
Customer(long customerID = 0, string name = "Asli", string address = "", string phone = "", double bonus = 0, string email = "", string username = "", string password = "");
	~Customer();
	//! return ID
	long getcustomerID();	
	//! set customer ID
	void setcustomerID(long);
	//! return name
	string getName() const;		
	//! set name
	void setName(string);	
	//! return address
	string getAddress() const;	
	//! set address
	void setAddress(string);
	//! return phone number 	
	string getphone() const;	
	//! set phone number
	void setphone(string);	
	//! return bonus amount
	double getBonus() const;
	//! set bonus
	void setBonus(double);	
	//! return e mail address
	string getemail() const;	
	//! set email address
	void setemail(string);	
	//! return username
	string getUsername() const; 
	//! set username
	void setUsername(string);
	//! return password
	string getPassword() const;
	//! set password
	void setPassword(string);
	//! check account
	bool checkAccount(string, string); 
	//!	print Customer object
	void print() const;		
};