//============================================================================
// Name        : HelloWorld.cpp
// Author      : Prof Dr. Rainer Herrler
// Version     :
// Copyright   : (c) 2021
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
    char cTree;
    int iSize, iSpace;

    std::cout << "Christmas Tree Application" << std::endl;
    std::cout << "Enter the size of your christmas tree: ";
    std::cin >> iSize;
    std::cout << "Enter the character you would like to use for your tree: ";
    std::cin >> cTree;

    iSpace = iSize;

    for (int i = 0; i < iSize*2; i+=2){
        std::string sTree(i, cTree);
        std::string sSpace(iSpace, ' ');
        std::cout << sSpace + sTree + sSpace<< std::endl;
        iSpace -= 1;
    }

    return 0;
}
