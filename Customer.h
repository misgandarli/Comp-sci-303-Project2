#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Book.h"
#include "LibraryTree.h"
#include "Rating.h"
#include <string>
#include <iostream>
using namespace std;

struct Customer
{

public:

	void setName(string);
	void setId(int);

	string getName();
	int getId();

	void rateBook(int IBSN, int rating);
	
	

	
private:

	string name;
	int id;


};
#endif