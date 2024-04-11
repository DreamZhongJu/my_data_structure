#include "tree.h"

Tree::Tree()
{
	this->root = nullptr;
}

Tree::Tree(Node* root)
{
	this->root = root;
}

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

Tree::~Tree()
{ }

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

Tree* Tree::tree2search(Tree a)
{
	Node* head = a.root;
	Node* root = new Node(head->data);
	queue<Node*> que;
	que.push(head);
	while (!que.empty()) {
		Node* t = que.front();
		que.pop();
		if (t->left != nullptr) que.push(t->left);
		if (t->right != nullptr) que.push(t->right);
		Tree::tree2search_helper(root,t->data);
	}
	auto ans = new Tree(root);
	return ans;
}

void Tree::tree2search_helper(Node* root,int val)
{
	//cout << val << endl;
	if (root->data > val) {//left
		if (root->left == nullptr) {
			Node* left = new Node(val);
			root->left = left;
			return;
		}
		else {
			Tree::tree2search_helper(root->left,val);
		}
	}
	else{//right
		if (root->right == nullptr) {
			Node* right = new Node(val);
			root->right = right;
			return;
		}
		else{
			Tree::tree2search_helper(root->right,val);
		}
	}
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
