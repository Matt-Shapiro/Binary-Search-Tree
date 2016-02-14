#include <cstddef>
#include "BSTNode.h"

BSTNode::BSTNode(){

}

BSTNode::~BSTNode(){
}
	
BSTNode* BSTNode::getLeft(){
	return left;
}

BSTNode* BSTNode::getRight(){
	return right;
}

int BSTNode::getValue(){
	return value;
}

BSTNode* BSTNode::setLeft(BSTNode* l){
	left = l; 
}

BSTNode* BSTNode::setRight(BSTNode* r){
	right = r;
}

int BSTNode::setValue(int val){
	value = val;
}

BSTNode* BSTNode::removeAux(BSTNode* parent, int n){
	if (n < this -> value){
		if (left != NULL)
			return left -> removeAux(this, n);
		else
			return NULL;
	} else if (n > this -> value){
		if (right != NULL)
			return right -> removeAux(this, n);
		else 
			return NULL;
	} else {
		if (left != NULL && right != NULL){
			this -> value = right -> minValue();
			return right -> removeAux(this, this -> value);
		} else if (parent -> left == this){
			parent -> left = (left != NULL) ? left : right;
			return this;
		} else if (parent -> right == this){
			parent -> right = (left != NULL) ? left : right;
			return this;
		}
	}	
}

int BSTNode::minValue(){
	if (left == NULL)
		return value;
	else 
		return left -> minValue();
}