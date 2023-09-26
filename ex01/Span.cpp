/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/09/26 13:00:17 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Span.hpp"

// Print
void Span::print(std::string const &str, int color) const
{
	std::string colorsString = "";
	std::string reset = "\e[0m";
	
	if (color > 0 && color <= 9)
	{
		std::ostringstream oss;
		oss << "\e[3" << color << "m";
		colorsString = oss.str();
	}
	if (str.empty())
		std::cout << colorsString << "[Span " << this->_size << "] " << reset;
	else
		std::cout << colorsString << "[Span " << this->_size << "] " << reset << str << std::endl;
}

// Constructors
Span::Span()
{
	this->_size = 0;
	this->print("created", 2);
}

Span::Span(size_t n)
{
	this->_size = n;
	this->print("created", 2);
}

Span::Span(Span const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Span::~Span()
{
	this->print("deleted", 1);
}

// Operators
Span const	&Span::operator=(Span const &copy)
{
	this->_size = copy._size;
	this->_vector = copy._vector;
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
void Span::addNumber(int number)
{
	if (this->_vector.size() < this->_size)
		this->_vector.push_back(number);
	else
		throw (StackFullException());
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		this->_vector.push_back(*begin++);
		if (this->_vector.size() > this->_size)
			throw (StackFullException());
	}
}

int Span::shortestSpan(void)
{
	int min;

	if (this->_vector.size() <= 1)
		throw (StackEmptyException());
	else
	{
		std::sort(this->_vector.begin(), this->_vector.end());
		min = this->_vector[1] - this->_vector[0];
		for (size_t i = 0; i < this->_vector.size() - 1; i++)
		{
			if (this->_vector[i + 1] - this->_vector[i] < min)
				min = this->_vector[i + 1] - this->_vector[i];
		}
	}
	return (min);
}

int Span::longestSpan(void)
{
    if (this->_vector.size() <= 1)
		throw (StackEmptyException());
	else
	{
		std::sort(this->_vector.begin(), this->_vector.end());
		return (this->_vector[this->_vector.size()] - this->_vector[0]);
	}
}

// Exceptions
const char *Span::StackFullException::what(void) const throw()
{
    return ("\e[31m[ERROR]\e[0m stack is full");
}

const char *Span::StackEmptyException::what(void) const throw()
{
    return ("\e[31m[ERROR]\e[0m stack is empty");
}