#include "Unfind.h"

Unfind::Unfind(int n)
{
	this->parent.resize(n + 1);
	this->rank.resize(n+1);
	this->size = n;
	for (int i = 0; i < n; i++) {
		this->parent[i + 1] = i + 1;
		this->rank[i + 1] = 1;
	}
}

int Unfind::find(int x)
{
	if (this->parent[x] != x) {
		this->parent[x] = find(this->parent[x]);
	}
	return this->parent[x];
}

void Unfind::merge(int a, int b)
{
	int root_a = find(a);
	int root_b = find(b);
	if (root_a != root_b) {
		if (rank[a] < rank[b]) {
			swap(a,b);
		}
		parent[b] = a;
		if (rank[root_a] == rank[root_b]) {
			rank[root_a]++;
		}
		size--;
	}
}

void Unfind::display()
{
	for (int i = 1; i < this->size; i++) {
		cout<<"The "<<i<<"'s parent is "<<parent[i]<< endl;
		cout << "The " << i << "'s rank is " <<rank[i] << endl;
	}
	cout << size << endl;
}
