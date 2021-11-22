/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:30:11 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/11/22 20:30:13 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
