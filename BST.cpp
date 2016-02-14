#include "iostream"
#include <cstddef>
#include "BST.h"

using namespace std;

BST::BST(){
	root = NULL;
}

BST::~BST(){

}

int BST::find(int n){
	return findAux(root, n);
}

int BST::findAux(BSTNode* &node, int n){
	if(node == NULL){
		return 0;
	}
	if (node -> getValue() == n)
		return n;
	if (n < node -> getValue()){
		if (node -> left == NULL)
			return 0;
		else
			return findAux(node -> left, n);
	}
	if (n > node -> getValue()){
		if (node -> right == NULL)
			return 0;
		else 
			return findAux(node -> right, n);
	}
}

int BST::insert(int n){
	BSTNode* INode = new BSTNode();
	INode -> setLeft(NULL);
	INode -> setRight(NULL);
	INode -> setValue(n);
	return insertAux(root, INode);
}

int BST::insertAux(BSTNode* &node, BSTNode* &INode){
	if (node == NULL){
		node = INode;
		return node -> getValue();
	}
	if (node -> getValue() == INode -> getValue())
		return 0;
	if (INode -> getValue() < node -> getValue()){
		if (node -> getLeft() == NULL){
			node -> setLeft(INode);	
			return INode -> getValue();
		}
		else
			return insertAux(node -> left, INode);
	}
	if (INode -> getValue() > node -> getValue()){
		if (node -> getRight() == NULL){
			node -> setRight(INode);
			return INode -> getValue();
		}
		else 
			return insertAux(node -> right, INode);
	}
}

int BST::remove(int n){
	if (root == NULL)
		return 0;
	else {
		if (root -> value == n){
			BSTNode a;
			a.value = 0;
			a.left = root;
			BSTNode* removed = root -> removeAux(&a, n);
			root = a.left;
			if (removed != NULL){
				delete removed;
				return 1;
			} else {
				return 0;
			}
		} else {
			BSTNode* removed = root -> removeAux(NULL, n);
			if (removed = NULL){
				delete removed;
				return 1;
			} else {
				return 0;
			}
		}
	}
}
