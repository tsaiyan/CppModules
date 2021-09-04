//
//  Brain.hpp
//  ex00
//
//  Created by Torres Saiyan on 9/4/21.
//  Copyright © 2021 Torres Saiyan. All rights reserved.
//

#ifndef Brain_hpp
#define Brain_hpp

#include <iostream>

class Brain {
private:
	int i;
protected:
	std::string ideas[100];
public:
	// MARK: Methonds
	void addIdea(std::string idea);
	std::string getIdea(int i);
	// MARK: Standart
	Brain();
	virtual ~Brain();
	Brain& operator=(const Brain &other);
	Brain(const Brain &other);
};

#endif /* Brain_hpp */
