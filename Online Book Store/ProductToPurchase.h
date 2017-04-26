/**
* @file ProductToPurchase.h
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Product To Pruchase
*
* With This file, we added Product To purchase to our shopping chart
*/
#pragma once
#include <iostream>
#include "Product.h"
using namespace std;
class ProductToPurchase
{
private:
	Product* product; /*!< pointer to a class Product object*/ 
	int quantity;/*!< quantity of purchased product*/ 
public:
	//!Constructer
	ProductToPurchase();
	//!destructer	
	~ProductToPurchase();
	//!Constructer
	ProductToPurchase(Product*, int);
	//! return a pointer to Product class object
	Product* getProduct() const;	
	//! set pointer to Product class object
	void setProduct(Product*);		
	//! return quantity of purchased product
	int getQuantity() const;	
	//! set quantity of purchased product
	void setQuantity(int);			
	//! return product*quantity
	double calculatePrice();	
	//! check product ID
	bool CheckId(Product*);	
};
