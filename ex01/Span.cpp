/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:55:11 by yabad             #+#    #+#             */
/*   Updated: 2023/11/26 13:03:59 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span& other) {
	*this = other;
}

Span::~Span() {}

Span&	Span::operator=(const Span& other) {
	if (this != &other) {
		this->container = other.container;
		this->N = other.N;
	}
	return (*this);
}

void	Span::addNumber(int n) {
	if (N > 0) {
		this->container.push_back(n);
		this->N--;
		return ;
	}
	throw Span::MaxElementsReachedException();
}

int	Span::shortestSpan() const {
	if (this->container.size() <= 1)
		throw Span::NoSpanFoundException();
	std::vector<int> tmp = this->container;
	std::sort(tmp.begin(), tmp.end(), std::greater<int>());
	std::vector<int>::iterator	it = tmp.begin();
	int	min = *it - *(it + 1);
	for (it = tmp.begin() + 1; it != tmp.end() - 1; it++) {
		if (min > *it - *(it + 1))
			min = *it - *(it + 1);
	}
	return (min);
}

int	Span::longestSpan() const {
	if (this->container.size() <= 1)
		throw Span::NoSpanFoundException();
	int	max = *std::max_element(this->container.begin(), this->container.end());
	int	min = *std::min_element(this->container.begin(), this->container.end());
	return (max - min);
}

void	Span::addRange(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	int	range = std::distance(first, last);
	if (range <= static_cast<int>(this->N)) {
		container.insert(container.end(), first, last);
		return ;
	}
	throw std::out_of_range("insufficient space");
}

void	Span::show() const {
	std::vector<int>::const_iterator it;
	for (it = this->container.begin(); it != this->container.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

const char*	Span::MaxElementsReachedException::what() const throw() {
	return ("max elements reached");
}

const char*	Span::NoSpanFoundException::what() const throw() {
	return ("no span found");
}