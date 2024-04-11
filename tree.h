#ifndef TREE_H
#define TREE_H
#include <queue>
#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node();
	Node(int);
};

class Tree {
	Node* root;
public:

	Tree(int[],int);
	Tree(vector<int>);
	void display();
	void helper_display(Node*);
};

#endif // !TREE_H
