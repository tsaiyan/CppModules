//
//  Brain.cpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include "Brain.hpp"


void Brain::addIdea(std::string idea) {
	if (i > 100 || i < 0)
		i = 0;
	this->ideas[this->i] = idea;
	this->i++;
}

std::string Brain::getIdea(int i) {
	if (i <= this->i && i >= 0)
		return this->ideas[i];
	return ("no ideas in brain");
};

// MARK: Standart

Brain::Brain() {
	std::cout << "🧠 Brain created." << std::endl;
	this->i = 0;
};

Brain::~Brain() { std::cout << "🧠 Brain destroyed." << std::endl; }

Brain &Brain::operator=(const Brain &other) {
	std::cout << "🧠 Brain operator= called." << std::endl;
	if (this != &other) {
		for(int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::Brain(const Brain &other) { *this = other; }

