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
	Tree();
	Tree(Node*);
	Tree(int[],int);//����һ���ܶ�ȡ˳����Ķ�����
	Tree(vector<int>);
	~Tree();
	void deleteTree(Node* node);
	void display();
	void helper_display(Node*);

	static Tree* tree2search(Tree);
	static void tree2search_helper(Node*,int);
};



#endif // !TREE_H
