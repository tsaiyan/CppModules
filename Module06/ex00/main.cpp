//
//  main.cpp
//  Module05
//
//  Created by Torres Saiyan on 11/17/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//
#include <iostream>

void myPrint(std::string string) {
	std::cout << string << std:: endl;
}

#include "Converter.hpp"

int main(int argc, char **argv) {

    if (argc != 2) {
        myPrint("bad arguments count!");
        return -1;
    }
    Converter converter(argv[1]);
    //converter.runTests();
    converter.runConverter();
	return 0;
}
