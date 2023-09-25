/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/09/25 13:11:44 by elias            ###   ########.fr       */
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
}

Span::Span(Span const &copy)
{
	this->print("created by copy", 2);
}

Span::~Span()
{
	this->print("deleted", 1);
}

// Operators
Span const	&Span::operator=(Span const &copy)
{
	this->print("created by assignment", 2);
}

// Methods