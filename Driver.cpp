#include "BST.h"
#include <iostream>
#include <sys/time.h>
#include <cstdlib>

using namespace std;

int main(){
	
	BST Tree;	
	struct timeval start, finish;
	
	for (int i = 1; i < 100000; i++){
		Tree.insert(i);
	}
	
	for (int j = 0; j < 100000; j = j + 10000){
		gettimeofday(&start, NULL);
		Tree.find(j);
		Tree.find(j);
		Tree.find(j);
		gettimeofday(&finish, NULL);
		double totalTime = 
		((double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		(double)(finish.tv_usec - start.tv_usec)) / 
		(double)1000000);
		cout << "Each find() call on a 100,000 node BST takes " << totalTime << "seconds." << endl;
	}
	
	int numElements = 100000;
	BST RandomTree;
	int randomArr[numElements];
	for (int k = 0; k < numElements; k++){
		randomArr[k] = k+1;
	}
	
	int r;
	for (int i = 1; i < numElements; i++){
		r = rand() % i;
		int temp = randomArr[r];
		randomArr[r] = randomArr[i];
		randomArr[i] = temp;
	}

	for (int i = 1; i < numElements; i++){
		RandomTree.insert(randomArr[i]);
	}
	
	for (int j = 0; j < 100000; j = j + 10000){
		gettimeofday(&start, NULL);
		RandomTree.find(j);	
		RandomTree.find(j);
		RandomTree.find(j);
		gettimeofday(&finish, NULL);
		double totalTime = 
		((double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		(double)(finish.tv_usec - start.tv_usec)) / 
		(double)1000000);
		cout << "Each find() call on a random 100,000 node BST takes " << totalTime << "seconds." << endl;
	}
	
	for (int i = 0; i < 100000; i = i + 4){
		Tree.remove(i);
	}
	
	for (int i = 0; i < 100000; i = i + 4){
		RandomTree.remove(i);
	}
	
	for (int i = 0; i < 100000; i = i + 10000){
		gettimeofday(&start, NULL);
		Tree.find(i);
		Tree.find(i);
		Tree.find(i);
		gettimeofday(&finish, NULL);
		double totalTime = 
		((double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		(double)(finish.tv_usec - start.tv_usec)) / 
		(double)1000000);
		cout << "Each find() call on a 75,000 node BST takes " << totalTime << "seconds." << endl;
	}
	
	for (int i = 0; i < 100000; i = i + 10000){
		gettimeofday(&start, NULL);
		RandomTree.find(i);
		RandomTree.find(i);
		RandomTree.find(i);
		gettimeofday(&finish, NULL);
		double totalTime = 
		((double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		(double)(finish.tv_usec - start.tv_usec)) / 
		(double)1000000);
		cout << "Each find() call on a Random 75,000 node BST takes " << totalTime << "seconds." << endl;
	}

	for (int i = 0; i < 75000; i = i + 2){
		Tree.remove(i);
	}
	
	for (int i = 0; i < 75000; i = i + 2){
		RandomTree.remove(i);
	}
	
	for (int i = 0; i < 100000; i = i + 10000){
		gettimeofday(&start, NULL);
		Tree.find(i);
		Tree.find(i);
		Tree.find(i);
		gettimeofday(&finish, NULL);
		double totalTime = 
		((double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		(double)(finish.tv_usec - start.tv_usec)) / 
		(double)1000000);
		cout << "Each find() call on a 50,000 node BST takes " << totalTime << "seconds." << endl;
	}
	
	for (int i = 0; i < 100000; i = i + 10000){
		gettimeofday(&start, NULL);
		RandomTree.find(i);
		RandomTree.find(i);
		RandomTree.find(i);
		gettimeofday(&finish, NULL);
		double totalTime = 
		((double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		(double)(finish.tv_usec - start.tv_usec)) / 
		(double)1000000);
		cout << "Each find() call on a Random 50,000 node BST takes " << totalTime << "seconds." << endl;
	}
	
}
