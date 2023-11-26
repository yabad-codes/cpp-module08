/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:28:34 by yabad             #+#    #+#             */
/*   Updated: 2023/11/26 14:39:58 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	display_stack(MutantStack<int> &mstack) {
	std::cout << "Stack elements : ";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Stack size : " << mstack.size() << std::endl;
}

int	main() {
	MutantStack<int>	mstack;

	for (int i = 0; i < 5; i++) {
		mstack.push(i);
	}
	display_stack(mstack);
	mstack.pop();
	display_stack(mstack);
	return (0);
}