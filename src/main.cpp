//============================================================================
// Name        : HelloWorld.cpp
// Author      : Prof Dr. Rainer Herrler
// Version     :
// Copyright   : (c) 2021
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include "tree.h"

using namespace std;

int main(){
    char cTree;
    int iSize;

    std::cout << "Christmas Tree Application" << std::endl;
    std::cout << "Enter the size of your christmas tree: ";
    std::cin >> iSize;
    std::cout << "Enter the character you would like to use for your tree: ";
    std::cin >> cTree;

	printTree(iSize, cTree);
	cout << std::setw(iSize+2) <<"****"<<endl;
	cout << std::setw(iSize+2) <<"****"<<endl;
    return 0;
}
