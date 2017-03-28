#include "Customer.h"

void Customer::setName(string theName)
{
	this->name = theName;
}

void Customer::setId(int theId)     // set the id of customer
{
	this->id = theId;
}

string Customer::getName()          // returns name of customer
{
	return this->name;
}

int Customer::getId()              // returns id of customer
{
	return this->id;

}
Book& findBook(int IBSN)
{

	
}

void Customer::rateBook(int IBSN, int theRating)
{
	Book hold = findBook(IBSN);
	if (hold.getTheRating() < 1)
	{
		hold.setRating(theRating);
	}
	else if (hold.getTheRating() > 1)
	{
		cout << "Would you like to cahnge the rating of this book? Y or N " << endl;
		char answer;
		cin >> answer;
		if (answer == 'Y')
		{
			hold.setRating(theRating);
		}
		else if (answer == 'N')
		{
			return;
		}
	}
}

