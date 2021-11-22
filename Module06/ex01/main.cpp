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

/* reinterpret_cast - Приведение типов без проверки. reinterpret_cast — непосредственное указание компилятору. Применяется только в случае полной уверенности программиста в собственных действиях. Не снимает константность и volatile. применяется для приведения указателя к указателю, указателя к целому и наоборот. */

#include <iostream>

struct Data {
	int Int;
	std::string String;
	char Char;
};

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t >(ptr));
}
Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main() {
	
		Data presializated = {999999, " money for ", 'x'};

		std::cout << "Presialization pointer: \t" << &presializated << std::endl;
		std::cout << "\nPresialization data:\n" << presializated.Int << presializated.String << presializated.Char << std::endl;
		std::cout << "- - - - -  -- - - -  -- -  - --  -\n";
	
		uintptr_t serializated = serialize(&presializated);
		std::cout << "Serialization pointer:\t" << serializated << std::endl;
		std::cout << "- - - - -  -- - - -  -- -  - --  -\n";
	
		Data *deserializated = deserialize(serializated);
		std::cout << "Deserialization pointer: \t" << deserializated << std::endl;
		std::cout << "\nDeserialization data:\n" << deserializated->Int << deserializated->String << deserializated->Char << std::endl;
		return 0;
}

int main2() {
	Data str = {999999, " money for ", 'x'};
	std::cout << "Before serialization\t" << &str << std::endl;
	uintptr_t n = serialize(&str);
	std::cout << "Serialization result\t" << n << std::endl;
	std::cout << "Deserialization result\t" << deserialize(n) << std::endl;
	return 0;
}
