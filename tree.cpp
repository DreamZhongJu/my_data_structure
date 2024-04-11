#include "tree.h"

//构建一个能读取顺序表搭建的二叉树
Tree::Tree(int list[],int length)
{
	if (length == 0) {
		return;
	}
	int index = 0;
	Node* ans = new Node(list[0]);
	queue<Node*> que;
	que.push(ans);
	while (index < length) {
		Node* t = que.front();
		que.pop();
		if (++index < length)
		{
			Node* left = new Node(list[index]);
			t->left = left;
			que.push(left);
		}
		if (++index < length)
		{
			Node* right = new Node(list[index]);
			t->right = right;
			que.push(right);
		}
	}
	this->root = ans;
}

Tree::Tree(vector<int> list)
{
	int length = list.size();
	if (length == 0) {
		return;
	}
	int index = 0;
	Node* ans = new Node(list[0]);
	queue<Node*> que;
	que.push(ans);
	while (index < length) {
		Node* t = que.front();
		que.pop();
		if (++index < length)
		{
			Node* left = new Node(list[index]);
			t->left = left;
			que.push(left);
		}
		if (++index < length)
		{
			Node* right = new Node(list[index]);
			t->right = right;
			que.push(right);
		}
	}
	this->root = ans;
}

void Tree::display()
{
	Node* root = this->root;
	this->helper_display(root);
}

void Tree::helper_display(Node* root)
{
	if (root == nullptr) {
		return;
	}
	cout << root->data << endl;
	helper_display(root->left);
	helper_display(root->right);
}

Node::Node()
{
	this->data = 0;
	this->left = this->right = nullptr;
}

Node::Node(int num)
{
	this->data = num;
	this->left = this->right = nullptr;
}
