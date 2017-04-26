/**
* @file ShoppingCart.cpp
* @Author Celal ORMANLI(ormanlicelal@gmail.com)
* @date January, 2017
* @brief Class of Shopping Cart
*
* With This file, we done shopping
*/
#include "ShoppingCart.h"
/*!Constructer*/
ShoppingCart::ShoppingCart()
{
}

Customer * ShoppingCart::getCustomer()
{
	return customer;
}
/*!
\param custom a Customer argument.
\set the customer
*/
void ShoppingCart::setCustomer(Customer *custom)
{
	customer = custom;
}
/*!
\open or close Bonus used for shopping
*/
void ShoppingCart::setBonusUsed()
{
	if (isBonusUsed == false)
	{
		isBonusUsed = true;
		cout << "Using bonus was opened" << endl;
	}
	else
	{
		isBonusUsed = false;
		cout << "Using bonus was closed" << endl;
	}
}
/*!
\param pr a Product argument.
\param quantity an Integer argument.
\return The true or false because of adding product
*/
bool ShoppingCart::addProduct(Product *pr,int quantity)
{
	ProductToPurchase *pro=new ProductToPurchase(pr,quantity);
	for (int i = 0; i < productToPurchase.size(); i++)
	{
		if (productToPurchase[i]->CheckId(pr))
		{
			productToPurchase[i]->setQuantity(quantity);
			return true;
		}
	}

		if (find(productToPurchase.begin(), productToPurchase.end(), pro) == productToPurchase.end()) {
			productToPurchase.push_back(pro);
			return true;
		}
		else {
			return false;
		}

}
/*!
\list product on console screen
*/
void ShoppingCart::listProducts() const
{
	Product* get;
	for (int i = 0; i<productToPurchase.size(); i++)
	{
		get=productToPurchase[i]->getProduct();
		get->printProperties();
		cout << "Quantity:" << productToPurchase[i]->getQuantity()<<endl;
		cout << endl;
	}
}
/*!
\param pr a Product argument.
\Remove product from product to purchase
*/void ShoppingCart::removeProduct(Product *pr)
{
	for (int i = 0; i < productToPurchase.size(); i++)
	{
		if (productToPurchase[i]->getProduct()->CheckID(pr->getID()))
		{
			productToPurchase.erase(productToPurchase.begin() + i);
		}
	}
	
}
/*!
\return The customer's bonus
*/double ShoppingCart::getBonus()
{
	return customer->getBonus();
}
/*!
\Buy Product in product to purchase
*/void ShoppingCart::placeOrder()
{
	if (productToPurchase.begin() != productToPurchase.end())
	{
		double TotalPrice = 0;
		for (int i = 0; i < productToPurchase.size(); i++)
		{
			TotalPrice = TotalPrice + productToPurchase[i]->calculatePrice();
		}
		if (isBonusUsed == true)
		{
			if ((customer->getBonus()) <= TotalPrice)
			{
				TotalPrice = TotalPrice - customer->getBonus();
				customer->setBonus((-1)*(customer->getBonus()));
			}
			else
			{
				customer->setBonus((-1)*( TotalPrice));
				TotalPrice = 0;
				isbonusenough = true;
			}
		}
		cout << "Total Price of your shopping " << TotalPrice << " TL" << endl;
		productToPurchase.clear();
		if (TotalPrice > 0)
		{
			setPaymentMethod(TotalPrice);
			double extrabonus = 0;
			extrabonus = (TotalPrice * 1) / 100;
			customer->setBonus(extrabonus);
		}
		else
		{
			cout << "Payment was completed with your bonus" << endl;
			ordered = true;
			isbonusenough = true;
		}
	}
}
/*!
\param Total a double argument.
\Choose payment method for shopping
*/
void ShoppingCart::setPaymentMethod(double Total)
{
	int Paymet;
	cout << "Please Select Payment Method" << endl;
	cout << "*******************" << endl;
	cout << "|PAYMENT MENU     |" << endl;
	cout << "*******************" << endl;
	cout << "|1. Credit Card   |" << endl;
	cout << "|2. Cash          |" << endl;
	cout << "|3. Check         |" << endl;
	cout << "*******************" << endl;
	cout << "Choose:";
	cin >> Paymet;
	if (Paymet == 1)
	{
		long cnumber;
		string cincnumber;
		bool cnumbercont = false;
		do {
			cnumbercont = true;
			cout << "Please Enter Card Number In This Format(12346578):";
			cin >> cincnumber;
			for (int i = 0; i < cincnumber.size(); i++)
			{
				if (isdigit(cincnumber[i]))
				{

				}
				else
				{
					cnumbercont = false;
				}
			}
			if (cincnumber.size() != 8)
			{
				cnumbercont = false;
			}
		} while (cnumbercont == false);
		cnumber = stol(cincnumber);
		string type;
		cout << "Please Enter Card Type:";
		cin.ignore(cin.rdbuf()->in_avail());
		getline(cin, type);
		string expDate;
		bool expdatecont = false;
		do {
			expdatecont = true;
			cout << "Please Enter Card ExpDate In This Format(2017):";
			cin.ignore(cin.rdbuf()->in_avail());
			getline(cin, expDate);
			for (int i = 0; i < expDate.size(); i++)
			{
				if (isdigit(expDate[i]))
				{

				}
				else
				{
					expdatecont = false;
				}
			}
			if (expDate.size() != 4)
			{
				expdatecont = false;
			}
		} while (expdatecont==false);
		paymentMethod = new CreditCard(cnumber,type,expDate,Total);
		ordered = true;
		isbonusenough = false;
	}
	if (Paymet == 2)
	{
		paymentMethod = new Cash(Total);
		ordered = true;
		isbonusenough = false;
	}
	if (Paymet == 3)
	{
		string Name;
		cout << "Please Enter Check Name:";
		cin.ignore(cin.rdbuf()->in_avail());
		getline(cin, Name);
		string BankId;
		cout << "Please Enter Bank ID:";
		cin.ignore(cin.rdbuf()->in_avail());
		getline(cin, BankId);
		paymentMethod = new Check(Name,BankId,Total);
		ordered = true;
		isbonusenough = false;
	}
}
/*!
\Cancel order if have been shopping
*/
void ShoppingCart::cancelOrder()
{
	if (ordered == true)
	{
		cout << "Your order was canceled." << endl;
		ordered = false;
	}
	else
	{
		cout << "There isn't any order." << endl;
	}
}
/*!
\Show Invoice if have been shopping
*/void ShoppingCart::showInvoice()
{
	if (ordered == true)
	{
		customer->print();
		cout << "_____________________________________________" << endl;
		cout << "Payment Method" << endl;
		cout << "_____________________________________________" << endl;
		if (isbonusenough == false)
		{
			paymentMethod->performPayment();
		}
		else
		{
			cout << "Payment was completed with your bonus" << endl;
		}
		cout << "_____________________________________________" << endl;
	}
	else
	{
		cout << "There isn't any invoice because of not order" << endl;
	}
}
/*!
\return Destructer
*/
ShoppingCart::~ShoppingCart()
{
	
}
