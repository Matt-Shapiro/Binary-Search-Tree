all:	BST

BST:	BST.o BSTNode.o Driver.o
	g++ BST.o BSTNode.o Driver.o -o BST.exe

BST.o BSTNode.o:	BST.cpp BSTNode.cpp Driver.cpp
	g++ -c BST.cpp BSTNode.cpp Driver.cpp

clean:	
	rm -f *.o BST.o BSTNode.o Driver.o BST.exe
