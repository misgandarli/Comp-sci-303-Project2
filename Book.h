#ifndef BOOK_H
#define BOOK_H

#include "Rating.h"
#include "TreeNode.h"
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
#endif

