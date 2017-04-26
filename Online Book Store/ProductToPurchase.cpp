/**
* @file ProductToPurchase.cpp
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Product To Purchase
*
* With This file, we added Product To Purchase
*/
#include "ProductToPurchase.h" 
/*!constructor*/
ProductToPurchase::ProductToPurchase()
{
}
/*! destructor*/
ProductToPurchase::~ProductToPurchase()
{
}
/*!
\param pro a Product argument.
\param quan an Integer argument.
\constructor
*/
ProductToPurchase::ProductToPurchase(Product * pro, int quan):product(pro),quantity(quan)
{
}
/*! return the pointer to purchased product*/
Product * ProductToPurchase::getProduct() const
{
	return product;
}
/*! return quantity*/
int ProductToPurchase::getQuantity() const
{
	return quantity;
}
/*! 
\param quantity1 an Integer argument.
\set quantity
*/
void ProductToPurchase::setQuantity(int quantity1)
{
	quantity = quantity+quantity1;
}
/*! return total price of product purchased*/
double ProductToPurchase::calculatePrice()
{
	return product->getPrice()*quantity;
}
/*! 
\param taking a Product argument.
\check ID
*/
bool ProductToPurchase::CheckId(Product *taking)
{
	if (taking->getID() == product->getID())
	{
		return true;
	}
	else
	{
		return false;
	}
} 
/*! 
\param prod a Product argument.
\set pointer to purchased product*/
void ProductToPurchase::setProduct(Product* prod)
{
	product = prod;
}