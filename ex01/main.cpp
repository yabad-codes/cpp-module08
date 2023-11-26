/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:21:45 by yabad             #+#    #+#             */
/*   Updated: 2023/11/26 13:10:05 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main() {
	std::vector<int>	numbers;
	Span	span(7);

	span.addNumber(-2);
	span.addNumber(-1);
	for (int i = 0; i < 5; i++) {
		numbers.push_back(i);
	}
	span.addRange(numbers.begin(), numbers.end());
	span.show();

	std::cout << "shortest span : " << span.shortestSpan() << std::endl;
	std::cout << "longest span : " << span.longestSpan() << std::endl;
	return (0);
}