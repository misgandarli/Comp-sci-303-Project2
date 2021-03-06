#pragma once
#include "LibraryTree.h"
using namespace std;


struct Book
{
	private:
		
		int ISBN;
		string Title;
		int theRating;
		LibraryTree<TreeNode<rating>> RatingTree();	

	public:
		void setISBN(int theISBN);
		void setTitle(string theTitle);
		void setRating(int theRating);
		int getISBN();
		int getTheRating();
		string getTitle();

};
