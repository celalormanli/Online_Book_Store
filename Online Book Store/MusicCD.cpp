/**
* @file MusicCD.cpp
* @Author Murat Nazým METÝN(mnmetin@ogu.edu.tr)
* @date January, 2017
* @brief Class of Music CD
*
* With This file, we added Music CD
*/
#include "MusicCD.h" 
using namespace std;
/*!
\param ID an Integer argument.
\param name a string argument.
\param price a double argument.
\param singer a string argument.
\param type a string argument.
\constructor
*/
MusicCD::MusicCD(int ID, string name, double price, string singer, string type) :Product(ID, name, price), singer(singer), type(type)
{
}
/*! destructor*/
MusicCD::~MusicCD() 
{
}							
/*! 
\param singer a string argument.
\set singer
*/
void MusicCD::setSinger(string singer)
{
	singer = singer;
}
/*! return singer*/
string MusicCD::getSinger() const
{
	return singer;
}
/*!
\param type a string argument.
\set type
*/
void MusicCD::setType(string type)
{
	type = type;
}
/*! return type*/
string MusicCD::getType() const
{
	return type;
}
/*! print MusicCD's information*/
void MusicCD::printProperties() const							
{
	Product::printProperties();									
	cout << "Singer is :" << singer << endl;
	cout << "Type :" << type << endl;
}