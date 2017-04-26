/**
* @file ShoppingCart.h
* @Author Celal ORMANLI(ormanlicelal@gmail.com)
* @date January, 2017
* @brief Class of Shopping Cart 
*
* With This file, we have connected other file and shoppingcart.cpp. And we done shopping
*/
#pragma once
#include <vector>
#include<list>
#include<iterator>
#include<stdlib.h>
#include<ctype.h>
#include"Customer.h"
#include"ProductToPurchase.h"
#include"Book.h"
#include"Magazine.h"
#include"MusicCD.h"
#include"Payment.h"
#include"CreditCard.h"
#include"Cash.h"
#include"Check.h"
class Customer;
class Payment;
class ProductToPurchase;
//! A Shopping Chart class.
/*!
This class created for shopping. 
If User enter the shopping menu,User has Created class.
User have to Login to can use other function in this class
This class connect all class in this app
*/
class ShoppingCart
{
private:
	Customer *customer;/*!< Customer */ 
	Payment* paymentMethod;/*!< Payment Method */
	vector<ProductToPurchase *> productToPurchase;/*!< Product to purchase */
	bool isBonusUsed;/*!< Is bonus used for control */
	bool ordered = false;/*!< Control Ordered */
	bool isbonusenough = true;/*!< Control Is bonus used */
public:
	//!A constructer
	ShoppingCart();
	//!function of getting customer
	Customer* getCustomer();
	//!function of setting customer
	void setCustomer(Customer*);
	//!function of setting bonus used
	void setBonusUsed();
	//!function of adding product
	bool addProduct(Product*,int);
	//!function of lissting product
	void listProducts() const;
	//!function of removing product
	void removeProduct(Product*);
	//!function of getting bonus
	double getBonus();
	//!function of placing order
	void placeOrder();
	//!function of setting payment method
	void setPaymentMethod(double);
	//!function of canceling order
	void cancelOrder();
	//!function of showing invoice
	void showInvoice();
	//!A destructer
	~ShoppingCart();
};

