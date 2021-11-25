//
//  span.c
//  Module81
//
//  Created by Torres Saiyan on 11/25/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#include <iostream>
#include "Span.hpp"

Span::Span(unsigned size) {
	this->size = size;
}

void Span::addNumber(const int newElement) {
	if (vector.size() == size) throw std::exception();
	vector.push_back(newElement);
}// ; - uncommit this to test C++11 checker

unsigned Span::getSize() {
	return size;
}
unsigned long Span::getLenght() {
	return vector.size();
}

int Span::shortestSpan() {
	if (vector.size() < 2) { throw "bad count in vector"; }
	std::sort(vector.begin(), vector.end());
	return abs(*vector.begin() - ( *vector.begin() + 1));
	
}

int Span::longestSpan() {
	if (vector.size() < 2) { throw "bad count in vector"; }
	std::sort(vector.begin(), vector.end());
	return abs(*(vector.end() - 1) - *vector.begin());
}

Span &Span::operator=(const Span &reffer)
{
	if (this == &reffer)
		return (*this);
	this->size = reffer.size;
	this->vector = reffer.vector;
	return (*this);
}

Span::~Span() {
}
