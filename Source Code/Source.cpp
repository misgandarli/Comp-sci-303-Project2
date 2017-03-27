#include "LibraryTree.h"
#include "TreeNode.h"
#include "Rating.h"
#include "Book.h"
#include <cstdlib>
#include <list>
#include <iostream>

using namespace std;


void main()
{
	LibraryTree<Book> bookTree();
}

list<Book> RecommendBooks(LibraryTree<Book>& root, list<Customer>& customers, list<Book> recommended )
{
	recommended = {};
	for (list<Customer>::iterator it = customers.begin(); it != customers.end(); it++)
	{
		//TODO
	}
	return recommended;

}