/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/09/26 15:10:35 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Constructors
template<typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "\e[32m[Stack created]\e[0m" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &copy)
{
	*this = copy;
	std::cout << "\e[32m[Stack created by copy]\e[0m" << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "\e[31m[Stack deleted]\e[0m" << std::endl;
}

// Operators
template<typename T>
MutantStack<T> const	&MutantStack<T>::operator=(MutantStack const &copy)
{
	std::cout << "\e[32m[Stack created by assignment]\e[0m" << std::endl;
	(void)copy;
	return (*this);
}
