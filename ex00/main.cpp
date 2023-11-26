/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:29:12 by yabad             #+#    #+#             */
/*   Updated: 2023/11/26 12:23:41 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main() {
	std::vector<int>	numbers;

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		int num = rand() % 10;
		numbers.push_back(num);
	}
	try {
		std::vector<int>::iterator	ptr = easyfind(numbers, 5);
		std::cout << "Number found : " << *ptr << std::endl;
	} catch (...) {
		std::cout << "Number not found!" << std::endl;
	}
	return (0);
}