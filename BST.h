#include "iostream"
#include <cstddef>
#include "BSTNode.h"
using namespace std;

class BST{
	
	public:
		BSTNode* root;
		BST();
		~BST();
		int find(int n);
		int findAux(BSTNode* &node, int n);
		int insert(int n);
		int insertAux(BSTNode* &node, BSTNode* &INode);
		int remove(int n);
};
