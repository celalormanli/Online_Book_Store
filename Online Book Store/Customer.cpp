/**
* @file Customer.cpp
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Customer
*
* With This file, we added and used customer
*/
#include "Customer.h"
/*!
\param ID a long argument.
\param name a string argument.
\param address a string argument.
\param phone a string argument.
\param bonuss a double argument.
\param email a string argument.
\param username a string argument.
\param password a string argument.
\constructor
*/
Customer::Customer(long ID, string name, string address, string phone, double bonuss, string email, string username, string password) :customerID(ID),name(name), address(address), phone(phone), bonus(bonuss), email(email), username(username), password(password)
{
}
/*! destructor*/
Customer:: ~Customer()
{
}
/*! return customer ID*/
long Customer::getcustomerID()
{
return customerID;
}
/*! 
\param customerID1 a long argument.
\set customer ID
*/
void Customer::setcustomerID(long customerID1)
{
	customerID = customerID1;
}
/*! return name*/
string Customer::getName() const
{
	return name;
}
/*!
\param name1 a string argument.
 \set name
 */
void Customer::setName(string name1)
{
	name = name1;
}
/*! return address*/
string Customer::getAddress() const
{
	return address;
}
/*!
\param address1 a string argument.
\set address
*/
void Customer::setAddress(string address1)
{
	address = address1;
}
/*! return phone number*/
string Customer::getphone() const
{
	return phone;
}
/*! 
\param phone1 a string argument.
\set phone number*/
void Customer::setphone(string phone1)
{
	phone = phone1;
}
/*! return bonus*/
double Customer::getBonus() const
{
	return bonus;
}
/*!
\param bonus1 a double argument.
\ set bonus
*/
void Customer::setBonus(double bonus1)
{
	bonus = bonus+bonus1;
}
/*! return email*/
string Customer::getemail() const
{
	return email;
}
/*! 
\param email1 a string argument.
\set email
*/
void Customer::setemail(string email1)
{
	email = email1;
}
/*! return username*/
string Customer::getUsername() const
{
	return username;
}
/*! 
\param username1 a string argument.
\set username
*/
void Customer::setUsername(string username1)
{
	username = username1;
}
/*! return password*/
string Customer::getPassword() const
{
	return password;
}
/*!
\param password1 a string argument.
\set password
*/
void Customer::setPassword(string password1)
{
	password = password1;
}
/*! 
\param username a string argument.
\param password a string argument.
\check account to login the system*/
bool Customer::checkAccount(string username, string password)
{
	if (getUsername() != username)
	{
		return false;
	}
	if (getPassword() != password)
	{
		return false;
	}
	return true;
}
/*! print Customer's information*/
void Customer::print() const
{
	cout << "Customer's ID is :" << customerID << endl;
	cout << "Customer's name is :" << name << endl;
	cout << "Customer's username is :" << username << endl;
	cout << "Customer's address is :" << address << endl;
	cout << "Customer's phone number is :" << phone << endl;
	cout << "Customer's e mail address is :" << email << endl;
	cout << "Customer's bonus is :" << bonus <<" TL"<< endl;
}