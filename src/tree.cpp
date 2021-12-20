#include <iostream>
#include "tree.h"
using namespace std;

void printTree(int iSize, char cTree) {
	int iSpace = iSize;
	for (int i = 0; i < iSize * 2; i += 2) {
		std::string sTree(i, cTree);
		std::string sSpace(iSpace, ' ');
		std::cout << sSpace + sTree + sSpace << std::endl;
		iSpace -= 1;
	}
}




