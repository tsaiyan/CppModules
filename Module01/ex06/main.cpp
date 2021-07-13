/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen-filter                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:30:23 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/13 16:30:28 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

State choiceState(const std::string &type) {
	if (type == "DEBUG")
		return debug;
	if (type == "INFO")
		return info;
	if (type == "WARNING")
		return warning;
	if (type == "ERROR")
		return error;
	return nothing;
}

int main(int argc, const char * argv[]) {
	Karen karen;

	if (argc != 2) {
		std::cout << "What wrong with you??" << std::endl;
		return (-1);
	}
	switch (choiceState(argv[1])) {
		case debug:
			std::cout <<"[ DEBUG ]"<< std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
		case info:
			std::cout <<"[ INFO ]"<< std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
		case warning:
			std::cout <<"[ WARNING ]"<< std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
		case error:
			std::cout <<"[ ERROR ]"<< std::endl;
			karen.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}
