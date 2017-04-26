/**
* @file TEST.cpp
* @Author Celal ORMANLI(ormanlicelal@gmail.com)
* @date January, 2017
* @brief App file of this aplication
*
* With This file, we have tested our aplication. And we write test code for user
*/
#include<iostream>
#include<vector>
#include<iomanip>
#include<stdlib.h>
#include<ctype.h>
#include"Customer.h"
#include"ShoppingCart.h"
#include"MusicCD.h"
#include"Product.h"
#include"Book.h"
#include"Magazine.h"
using namespace std;
vector<Customer *> Custs;/*!< list of customer in shopping center */ 
vector<Product*>magazine;/*!< list of magazine in shopping center */
vector<Product*>musiccd;/*!< list of music cd in shopping center */
vector<Product*>book;/*!< list of book in shopping center */
int Id_Count=1;/*!< ID of customer because of being unique */
int Pro_Id_Count = 1000;/*!< ID of Products because of being unique */
bool logined = false;/*!< control logined */
/*!
\Customer Menu for User
*/ 
void CustomerMenu()
{
	string menu1;/*!< \param becauseof entering from console  */ 
	do {
	cout << "*************************************" << endl;
	cout << "|          CUSTOMER MENU            |" << endl;
	cout << "*************************************" << endl;
	cout << "|1. Add a new customer to system    |" << endl;
	cout << "|2. Show the customers in the system|" << endl;
	cout << "|3. Back                            |" << endl;
	cout << "*************************************" << endl;
	cout << "Choose one:";
	cin >> menu1;
	system("cls");
	if (menu1 == "1")
	{
		string name;/*!< \param becauseof entering from console  */
		cout << "Name:";
		cin.ignore(cin.rdbuf()->in_avail());
		getline(cin, name);
		string address;/*!< \param becauseof entering from console  */
		cout << "Address:";
		cin.ignore(cin.rdbuf()->in_avail());
		getline(cin, address);
		string phone;/*!< \param becauseof entering from console  */
		bool phonecont = false;
		do {
			phonecont = true;
			cout << "Phone:";
			cin.ignore(cin.rdbuf()->in_avail());
			getline(cin, phone);
			for (int i = 0; i < phone.size(); i++)
			{
				if (isdigit(phone[i]))
				{

				}
				else
				{
					phonecont = false;
				}
			}
		} while (phonecont == false);
		string mail;/*!< \param becauseof entering from console  */
		cout << "mail:";
		cin.ignore(cin.rdbuf()->in_avail());
		getline(cin, mail);
		string username;/*!< \param becauseof entering from console  */
		bool UsernameControl = false;
		do {
			UsernameControl = false;
			cout << "username:";
			cin.ignore(cin.rdbuf()->in_avail());
			getline(cin, username);
			for (int i = 0; i < Custs.size(); i++)
			{
				if (Custs[i]->getUsername() == username)
				{
					UsernameControl = true;
					cout << username << " was registered Please enter different username" << endl;
				}
			}
		} while (UsernameControl == true);
		string password;/*!< \param becauseof entering from console  */
		cout << "password:";
		cin.ignore(cin.rdbuf()->in_avail());
		getline(cin, password);
		if (name.empty() || address.empty() ||phone.empty()|| mail.empty() || username.empty() || password.empty())
		{
			cout << "Please complete all option." << endl;
		}
		else
		{
			Customer *cus = new Customer(Id_Count, name, address, phone, 0, mail, username, password);
			if (find(Custs.begin(), Custs.end(), cus) == Custs.end()) {
				Custs.push_back(cus);
				Id_Count++;
				cout << "Success" << endl;
			}
			else {
				cout << "ERROR" << endl;
			}
		}
	}
	if (menu1 == "2")
	{
		for (int i = 0; i<Custs.size(); i++)
		{
			cout << "*************************************" << endl;
			Custs[i]->print();
		}
	}
	if (menu1 != "1"&& menu1 != "2" && menu1 != "3")
	{
		cout << "Add a new number" << endl;
	}
	} while (menu1 != "3");
}
/*!
\Item Menu for User
*/
void ItemMenu()
{
	string menu2;/*!< \param becauseof entering from console  */
	do {
		cout << "***********************************" << endl;
		cout << "|           ITEM MENU             |" << endl;
		cout << "***********************************" << endl;
		cout << "|1. Add a new Item to system      |" << endl;
		cout << "|2. Show the items in the system  |" << endl;
		cout << "|3. Back                          |" << endl;
		cout << "***********************************" << endl;
		cout << "Choose one:";
		cin >> menu2;
		system("cls");
		if (menu2 == "1")
		{
			bool pricecont = false;
			string menu0;
			do {
				cout << "*******************************" << endl;
				cout << "|      ADDING ITEM MENU       |" << endl;
				cout << "*******************************" << endl;
				cout << "|Please Select type of Product|" << endl;
				cout << "|1. Book                      |" << endl;
				cout << "|2. Magazine                  |" << endl;
				cout << "|3. MusicCD                   |" << endl;
				cout << "|4. Back                      |" << endl;
				cout << "*******************************" << endl;
				cout << "Choose one:";
				cin >> menu0;
				system("cls");
				if (menu0 == "1")
				{
					string name;/*!< \param becauseof entering from console  */
					cout << "Enter Book Name:";
					cin.ignore(cin.rdbuf()->in_avail());
					getline(cin, name);
					double price;
					string cinprice;/*!< \param becauseof entering from console  */
					do {
						int dotcount = 0;
						pricecont = true;
						cout << "Enter Price:";
						cin >> cinprice;
						for (int i = 0; i < cinprice.size(); i++)
						{
							if (isdigit(cinprice[i]) || cinprice[i] == '.')
							{
								if (cinprice[i] == '.')
								{
									dotcount++;
								}
							}
							else
							{
								pricecont = false;
							}
						}
						if (dotcount > 1)
						{
							pricecont = false;
						}
					} while (pricecont == false);
					price = stod(cinprice);
					string author;/*!< \param becauseof entering from console  */
					cout << "Enter Author Name:";
					cin.ignore(cin.rdbuf()->in_avail());
					getline(cin, author);
					string publisher;/*!< \param becauseof entering from console  */
					cout << "Enter Publisher:";
					cin.ignore(cin.rdbuf()->in_avail());
					getline(cin, publisher);
					int page;
					string cinpage;/*!< \param becauseof entering from console  */
					bool pagecont=false;
					do {
						pagecont = true;
						cout << "Enter Page:";
						cin >> cinpage;
						for (int i = 0; i < cinpage.size(); i++)
						{
							if (isdigit(cinpage[i]))
							{

							}
							else
							{
								pagecont = false;
							}
						}
					} while (pagecont == false);
					page = stoi(cinpage);
					if (name.empty() || author.empty() || publisher.empty())
					{
						cout << "Please complete all option." << endl;
					}
					else
					{
						Product*bo = new Book(Pro_Id_Count, name, price, author, publisher, page);
						if (find(book.begin(), book.end(), bo) == book.end())
						{
							book.push_back(bo);
							Pro_Id_Count++;
							system("cls");
						}
					}
				
				}
				if (menu0 == "2")
				{
					string name;/*!< \param becauseof entering from console  */
					cout << "Enter Magazine Name:";
					cin.ignore(cin.rdbuf()->in_avail());
					getline(cin, name);
					double price;
					string cinprice;/*!< \param becauseof entering from console  */
					do {
						int dotcount = 0;
						pricecont = true;
						cout << "Enter Price:";
						cin >> cinprice;
						for (int i = 0; i < cinprice.size(); i++)
						{
							if (isdigit(cinprice[i]) || cinprice[i] == '.')
							{
								if (cinprice[i] == '.')
								{
									dotcount++;
								}
							}
							else
							{
								pricecont = false;
							}
						}
						if (dotcount > 1)
						{
							pricecont = false;
						}
					} while (pricecont == false);
					price = stod(cinprice);
					int issue;
					string cinissue;/*!< \param becauseof entering from console  */
					bool issuecont = false;
					do {
						issuecont = true;
						cout << "Enter Issue:";
						cin >> cinissue;
						for (int i = 0; i < cinissue.size(); i++)
						{
							if (isdigit(cinissue[i]))
							{

							}
							else
							{
								issuecont = false;
							}
						}
					} while (issuecont == false);
					issue = stoi(cinissue);	
					string type;/*!< \param becauseof entering from console  */
					cout << "Enter Type:";
					cin.ignore(cin.rdbuf()->in_avail());
					getline(cin, type);
					if (name.empty() || type.empty())
					{
						cout << "Please complete all option." << endl;
					}
					else
					{
						Product*magazi = new Magazine(Pro_Id_Count, name, price, issue, type);
						if (find(magazine.begin(), magazine.end(), magazi) == magazine.end())
						{
							magazine.push_back(magazi);
							Pro_Id_Count++;
							system("cls");
						}
					}
					
				}
				if (menu0 == "3")
				{
					string name;/*!< \param becauseof entering from console  */
					cout << "Enter MusicCD Name:";
					cin.ignore(cin.rdbuf()->in_avail());
					getline(cin, name);
					double price;
					string cinprice;/*!< \param becauseof entering from console  */
					do {
						int dotcount = 0;
						pricecont = true;
						cout << "Enter Price:";
						cin >> cinprice;
						for (int i = 0; i < cinprice.size(); i++)
						{
							if (isdigit(cinprice[i]) || cinprice[i] == '.')
							{
								if (cinprice[i] == '.')
								{
									dotcount++;
								}
							}
							else
							{
								pricecont = false;
							}
						}
						if (dotcount > 1)
						{
							pricecont = false;
						}
					} while (pricecont == false);
					price = stod(cinprice);
					string singer;/*!< \param becauseof entering from console  */
					cout << "Enter Singer:";
					cin.ignore(cin.rdbuf()->in_avail());
					getline(cin, singer);
					string type;/*!< \param becauseof entering from console  */
					cout << "Enter Type:";
					cin.ignore(cin.rdbuf()->in_avail());
					getline(cin, type);
					if (name.empty() || singer.empty() || type.empty())
					{
						cout << "Please complete all option." << endl;
					}
					else
					{
						Product*music = new MusicCD(Pro_Id_Count, name, price, singer, type);
						if (find(musiccd.begin(), musiccd.end(), music) == musiccd.end())
						{
							musiccd.push_back(music);
							Pro_Id_Count++;
							system("cls");
						}
					}
				}
				if (menu0 != "1" && menu0 != "2" && menu0 != "3" && menu0 != "4")
				{
					cout << "Add a new number" << endl;
				}
			} while (menu0 != "4");
		}
		if (menu2 == "2")
		{
			string menu0;/*!< \param becauseof entering from console  */
			do {

				cout << "*******************************" << endl;
				cout << "|      SHOWING ITEM MENU      |" << endl;
				cout << "*******************************" << endl;
				cout << "|Please Select type of Product|" << endl;
				cout << "|1. Book                      |" << endl;
				cout << "|2. Magazine                  |" << endl;
				cout << "|3. MusicCD                   |" << endl;
				cout << "|4. Back                      |" << endl;
				cout << "*******************************" << endl;
				cout << "Choose one:";
				cin >> menu0;
				system("cls");
				if (menu0 == "1")
				{
					for (int i = 0; i<book.size(); i++)
					{
						cout << "********************************" << endl;
						book[i]->printProperties();
					}
				}
				if (menu0 == "2")
				{
					for (int i = 0; i<magazine.size(); i++)
					{
						cout << "********************************" << endl;
						magazine[i]->printProperties();
					}
				}
				if (menu0 == "3")
				{
					for (int i = 0; i<musiccd.size(); i++)
					{
						cout << "********************************" << endl;
						musiccd[i]->printProperties();
					}
				}
				if (menu0 != "1" && menu0 != "2" && menu0 != "3" && menu0 != "4")
				{
					cout << "Add a new number" << endl;
				}
			} while (menu0 != "4");
		}
		if (menu2 != "1" && menu2 != "2" && menu2 != "3")
		{
			cout << "Add a new number" << endl;
		}
	} while (menu2 != "3");

}
/*!
\Shopping Menu for User
*/
void ShoppingMenu()
{
	ShoppingCart* sp = new ShoppingCart();/*!< \param for creating sp */
	string menu0;/*!< \param becauseof entering from console  */
	do {

		cout << "*******************************" << endl;
		cout << "|       SHOPPING MENU         |" << endl;
		cout << "*******************************" << endl;
		cout << "|1. Login                     |" << endl;
		cout << "|2. Add Prouct                |" << endl;
		cout << "|3. Remove Product            |" << endl;
		cout << "|4. List All Product          |" << endl;
		cout << "|5. List Shopping Cart        |" << endl;
		cout << "|6. Show Bonus                |" << endl;
		cout << "|7. Use Bonus                 |" << endl;
		cout << "|8. Place Order               |" << endl;
		cout << "|9. Cancel Order              |" << endl;
		cout << "|10. Show Invoice             |" << endl;
		cout << "|11. Quit                     |" << endl;
		cout << "*******************************" << endl;
		cout << "Choose one:";
		cin >> menu0;
		system("cls");
		if (menu0 == "1")
		{
			if (logined == false)
			{
				string usern;/*!< \param becauseof entering from console  */
				string pass;/*!< \param becauseof entering from console  */
				cout << "Username:";
				cin >> usern;
				cout << "Password:";
				cin >> pass;
				for (int i = 0; i < Custs.size(); i++)
				{
					if (Custs[i]->checkAccount(usern, pass))
					{
						logined = true;
						cout << "Login Success" << endl;
						cout << "Welcome " << Custs[i]->getName() << endl;
						sp->setCustomer(Custs[i]);
					}
				}
				if (logined == false)
				{
					cout << "Your Username or Password are false" << endl;
				}
			}
		}
		if (menu0 == "2")
		{
			if (logined == true)
			{
				bool profind = false;
				int Id;/*!< \param becauseof entering from console  */
				int Quan=0;
				cout << "Please Enter Prouct ID:";
				cin >> Id;
				do {
					string cinQuan;/*!< \param becauseof entering from console  */
					bool QuanCont=false;
					do {
						QuanCont = true;
						cout << "Please Enter Quantity(max:9):";
						cin >> cinQuan;
						for (int i = 0; i < cinQuan.size(); i++)
						{
							if (isdigit(cinQuan[i]))
							{

							}
							else
							{
								QuanCont = false;
							}
						}
						if (cinQuan.size() > 1)
						{
							QuanCont = false;
						}
					} while (QuanCont == false);
					Quan = stoi(cinQuan);
					if (Quan < 1)
					{
						cout << "Please Enter Positive Number" << endl;
					}
				} while (Quan < 1);
				for (int i = 0; i < book.size(); i++)
				{
					if (book[i]->CheckID(Id))
					{
						sp->addProduct(book[i], Quan);
					}
				}
				for (int i = 0; i < magazine.size(); i++)
				{
					if (magazine[i]->CheckID(Id))
					{
						sp->addProduct(magazine[i], Quan);
					}
				}
				for (int i = 0; i < musiccd.size(); i++)
				{
					if (musiccd[i]->CheckID(Id))
					{
						sp->addProduct(musiccd[i], Quan);
					}
				}
			}
			else
			{
				cout << "Please Login With Your Account" << endl;
			}
		}
		if (menu0 == "3")
		{
			if (logined == true)
			{
				long Id;/*!< \param becauseof entering from console  */
				Product *Removed = new Product();
				cin >> Id;
				Removed->setID(Id);
				sp->removeProduct(Removed);
			}
			else
			{
				cout << "Please Login With Your Account" << endl;
			}
		}
		if (menu0 == "4")
		{
			for (int i = 0; i < book.size(); i++)
			{
				cout << "*****************************" << endl;
				book[i]->printProperties();
				
			}
			for (int i = 0; i < magazine.size(); i++)
			{
				cout << "*****************************" << endl;
				magazine[i]->printProperties();
				
			}
			for (int i = 0; i < musiccd.size(); i++)
			{
				cout << "*****************************" << endl;
				musiccd[i]->printProperties();
				
			}
		}
		if (menu0 == "5")
		{
			if (logined == true)
			{
				sp->listProducts();
			}
			else
			{
				cout << "Please Login With Your Account" << endl;
			}
		}
		if (menu0 == "6")
		{
			if (logined == true)
			{
				cout << "You have " << sp->getBonus() << " TL Bonus" << endl;
			}
			else
			{
				cout << "Please Login With Your Account" << endl;
			}
		}
		if (menu0 == "7")
		{
			if (logined == true)
			{
				sp->setBonusUsed();
			}
			else
			{
				cout << "Please Login With Your Account" << endl;
			}
		}
		if (menu0 == "8")
		{
			if (logined == true)
			{
				sp->placeOrder();
			}
			else
			{
				cout << "Please Login With Your Account" << endl;
			}
		}
		if (menu0 == "9")
		{
			if (logined == true)
			{
				sp->cancelOrder();
			}
			else
			{
				cout << "Please Login With Your Account" << endl;
			}
			}
		if (menu0 == "10")
		{
			if (logined == true)
			{
				sp->showInvoice();
			}
			else
			{
				cout << "Please Login With Your Account" << endl;
			}
		}
		if (menu0 == "11")
		{
			cout << "Logout was completed" << endl;
			logined = false;
			sp->~ShoppingCart();
		
		}
		if (menu0 != "1" && menu0 != "2" && menu0 != "3" && menu0 != "4" && menu0 != "5" && menu0 != "6" && menu0 != "7" && menu0 != "8" && menu0 != "9" && menu0 != "10" && menu0 != "11")
		{
			cout << "Add a new number" << endl;
		}
	} while (menu0 != "11");
}
void main(void)
{
	Customer *cus1=new Customer(Id_Count, "Ahmet GOKOVA", "Eskisehir", "02220252121", 54, "Ahmet@gmail.com", "Ahmet.26", "123456");
	if (find(Custs.begin(), Custs.end(), cus1) == Custs.end()) 
	{
		Custs.push_back(cus1);
		Id_Count++;
	}
	Customer *cus2 = new Customer(Id_Count, "Yasemin Ergul", "Istanbul", "05550231531", 12, "Yas.er@hotmail.com", "Yas.er", "123456");
	if (find(Custs.begin(), Custs.end(), cus2) == Custs.end())
	{
		Custs.push_back(cus2);
		Id_Count++;
	}
	Customer *cus3 = new Customer(Id_Count, "Sýla Günay", "Izmir", "05558524587", 35, "S.gunay@mynet.com", "Sila.35", "123456");
	if (find(Custs.begin(), Custs.end(), cus3) == Custs.end())
	{
		Custs.push_back(cus3);
		Id_Count++;
	}
	Customer *cus4 = new Customer(Id_Count, "Mehmet Erdem", "Kayseri", "05325248963", 120, "Erdemehmet@yahoo.com", "Meh.er", "123456");
	if (find(Custs.begin(), Custs.end(), cus4) == Custs.end())
	{
		Custs.push_back(cus4);
		Id_Count++;
	}
	Customer *cus5 = new Customer(Id_Count, "Gizem Kara", "Ankara", "05452563258", 200, "Gizem@gmail.com", "Kara.06", "123456");
	if (find(Custs.begin(), Custs.end(), cus5) == Custs.end())
	{
		Custs.push_back(cus5);
		Id_Count++;
	}
	Product *bk1= new Book(Pro_Id_Count, "Olasiliksiz", 15.2, "Adam Fawer", "Ayrinti Yayinevi", 214);
	if (find(book.begin(), book.end(), bk1) == book.end())
	{
		book.push_back(bk1);
		Pro_Id_Count++;
	}
	Product *bk2 = new Book(Pro_Id_Count, "Suc Ve Ceze", 20.9, "Dostoyevski", "April Yayincilik", 350);
	if (find(book.begin(), book.end(), bk2) == book.end())
	{
		book.push_back(bk2);
		Pro_Id_Count++;
	}
	Product *bk3 = new Book(Pro_Id_Count, "Aclik Oyunlari", 18.8, " Suzanne Collins", "Dex Kitap", 180);
	if (find(book.begin(), book.end(), bk3) == book.end())
	{
		book.push_back(bk3);
		Pro_Id_Count++;
	}
	Product *mg1= new Magazine(Pro_Id_Count,"ShiftDelete",8.2,12, "Teknoloji");
	if (find(magazine.begin(), magazine.end(), mg1) == magazine.end())
	{
		magazine.push_back(mg1);
		Pro_Id_Count++;
	}
	Product *mg2 = new Magazine(Pro_Id_Count, "Ekonomi Dergisi", 10.5, 18, "Ekonomi");
	if (find(magazine.begin(), magazine.end(), mg2) == magazine.end())
	{
		magazine.push_back(mg2);
		Pro_Id_Count++;
	}
	Product *mg3 = new Magazine(Pro_Id_Count, "Otomobil Dergisi", 4.1, 80, "Otomobil");
	if (find(magazine.begin(), magazine.end(), mg3) == magazine.end())
	{
		magazine.push_back(mg3);
		Pro_Id_Count++;
	}
	Product *mcd1 = new MusicCD(Pro_Id_Count, "Janti", 12.8, "Murat Boz", "Pop");
	if (find(musiccd.begin(), musiccd.end(), mcd1) == musiccd.end())
	{
		musiccd.push_back(mcd1);
		Pro_Id_Count++;
	}
	Product *mcd2 = new MusicCD(Pro_Id_Count, "Murekkep", 14, "Sila Gencoglu", "Caz");
	if (find(musiccd.begin(), musiccd.end(), mcd2) == musiccd.end())
	{
		musiccd.push_back(mcd2);
		Pro_Id_Count++;
	}
	Product *mcd3 = new MusicCD(Pro_Id_Count, "1989", 12.8, "Taylor Swift", "Yabanci");
	if (find(musiccd.begin(), musiccd.end(), mcd3) == musiccd.end())
	{
		musiccd.push_back(mcd3);
		Pro_Id_Count++;
	}
	string menu0;/*!< \param becauseof entering from console  */
	do {
		cout << "***************" << endl;
		cout << "|  MAIN MENU  |" << endl;
		cout << "***************" << endl;
		cout << "|1. Customer  |" << endl;
		cout << "|2. Item      |" << endl;
		cout << "|3. Shopping  |" << endl;
		cout << "|4. Quit      |" << endl;
		cout << "***************" << endl;
		cout << "Choose one:";
		cin >> menu0;
		system("cls");
		if (menu0 == "1")
		{
			CustomerMenu();
		}
		if (menu0 == "2")
		{
			ItemMenu();
		}
		if (menu0 == "3")
		{
			ShoppingMenu();
		}
		if (menu0 != "1" && menu0 != "2" && menu0 != "3" && menu0 != "4")
		{
			cout << "Add a new number" << endl;
		}
			
	} while (menu0 != "4");
	system("pause");
}