/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/26 13:34:14 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "MutantStack.hpp"

// Print
void MutantStack::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[MutantStack " << this->_name << "] " << reset;
	else
		std::cout << colorsString << "[MutantStack " << this->_name << "] " << reset << str << std::endl;
}

// Constructors
MutantStack::MutantStack()
{
	this->print("created", 2);
}

MutantStack::MutantStack(MutantStack const &copy)
{
	this->print("created by copy", 2);
}

MutantStack::~MutantStack()
{
	this->print("deleted", 1);
}

// Operators
MutantStack const	&MutantStack::operator=(MutantStack const &copy)
{
	this->print("created by assignment", 2);
}

// Methods