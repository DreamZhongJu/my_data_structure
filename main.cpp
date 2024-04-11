#include "tree.h"
int main() {
	int nums[] = {1,3,5,6,8,9};
	vector<int> num(nums,nums+3);
	auto tree = Tree(num);
	tree.display();
}