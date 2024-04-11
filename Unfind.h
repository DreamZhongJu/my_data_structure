#ifndef UNFIND_H
#define UNFIND_H
#include <iostream>
#include <vector>
using namespace std;

class Unfind {
public:
	vector<int> parent;
	vector<int> rank;
	int size;//Ê÷µÄ¸öÊý
	Unfind(int);
	int find(int);
	void merge(int, int);
	void display();
};


#endif // !UNFIND_H
