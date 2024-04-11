#include "Unfind.h"
int main() {
	Unfind fin = Unfind(8);
	fin.display();
	fin.merge(1,2);
	fin.merge(1, 4);
	fin.merge(1, 8);
	fin.merge(1, 5);
	fin.merge(1, 2);
	fin.display();
}