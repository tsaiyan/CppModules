//
//  WrongCat.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//


#include "WrongCat.hpp"

// MARK: Standart

WrongCat::WrongCat() {
	std::cout << "🐲 WrongCat created." << std::endl;
	this->type = "WrongCat";
	
};

WrongCat::~WrongCat() { std::cout << "🐲 WrongCat destroyed." << std::endl; }

WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &other) { *this = other; }
