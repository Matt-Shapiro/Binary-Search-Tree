using namespace std;

class BSTNode{

	public:
		BSTNode* left;
		BSTNode* right;
		int value;
		BSTNode();
		~BSTNode();
		BSTNode* getLeft();
		BSTNode* getRight();
		int getValue();
		BSTNode* setLeft(BSTNode* l);
		BSTNode* setRight(BSTNode* r);
		int setValue(int val);
		BSTNode* removeAux(BSTNode* parent, int n);
		int minValue();
};
