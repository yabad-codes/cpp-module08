/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:58:21 by yabad             #+#    #+#             */
/*   Updated: 2023/11/26 14:35:14 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack& other) : std::stack<T>() {
			*this = other;
		};
		~MutantStack() {};

		MutantStack&	operator=(const MutantStack& other) {
			(void)other;
			return (*this);
		};
		
		typedef typename std::stack<T>::container_type::iterator	iterator;
		
		iterator	begin() {
			return (std::stack<T>::c.begin());
		};
		
		iterator	end() {
			return (std::stack<T>::c.end());
		};
};

#endif