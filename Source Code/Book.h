#pragma once

#include "Rating.h"
#include "TreeNode.h"
#include "LibraryTree.h"
using namespace std;

class Book
{
	int ISBN;
	string Title;

	TreeNode<rating> RateRoot;
	LibraryTree<TreeNode<rating>> RatingTree();
	
};


