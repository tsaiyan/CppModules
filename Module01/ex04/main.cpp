/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m01ex03                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:37:37 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/11 16:58:59 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceStr(std::string buf, std::string s1, std::string s2) {
	std::string temp;
	std::string partOne;
	std::string partTwo;
	unsigned long len;

	while ((len = buf.find(s1)) != std::string::npos) {
		partOne = buf.substr(0, len);
		partTwo = buf.substr(s1.length() + partOne.size());
		buf = partOne + s2 + partTwo;
	}
	return(buf);
}

std::string myToupper(char *str) {
	int i;
	
	char upStr[strlen(str)];
		for ( i = 0; str[i]; i++)
			upStr[i] = (char)toupper(str[i]);
	upStr[i] = '\0';
	std::string res(upStr);
	return (res);
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "bad arguments" << std::endl;
		return (-1);
	}
	
	std::string s1 = argv[2];
	std::string s2 = argv[3];;
	std::string outputFile;
	std::fstream file(argv[1]);
	std::string	buf;
	std::string fileName(argv[1]);

	if (!file.is_open()) {
		std::cout << "can't open the file" << std::endl;
		return (-1);
	}
	if (s1.empty() || s2.empty()) {
		std::cout << "empty strings" << std::endl;
		return (-1);
	}
	std::ofstream oFile (myToupper(argv[1]) + ".replace") ;
	while (getline(file, buf)) {
			oFile << replaceStr(buf, s1, s2) << std::endl;
	}
	oFile.close();
}
