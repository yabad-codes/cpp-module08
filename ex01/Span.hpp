/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:43:18 by yabad             #+#    #+#             */
/*   Updated: 2023/11/24 15:12:28 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
	private:
		unsigned int		N;
		std::vector<int>	container;
	public:
		Span();
		Span(unsigned int);
		Span(const Span&);
		~Span();

		Span&	operator=(const Span&);

		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	addRange(std::vector<int>::iterator, std::vector<int>::iterator);
		void	show() const;

		class MaxElementsReachedException : public std::exception {
			public:
				const char* what() const throw();
		};
		
		class NoSpanFoundException : public std::exception {
			public:
				const char*	what() const throw();
		};
};

#endif