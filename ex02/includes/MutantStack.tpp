/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/09/26 14:27:37 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Constructors
template<typedef T>
MutantStack<T>::MutantStack()
{
	std::cout << "[Stack created]" << std::endl;
}

template<typedef T>
MutantStack<T>::MutantStack(MutantStack const &copy)
{
	std::cout << "[Stack created by copy]" << std::endl;
}

template<typedef T>
MutantStack<T>::~MutantStack()
{
	*this = copy;
	std::cout << "[Stack deleted]" << std::endl;
}

// Operators
template<typedef T>
MutantStack<T> const	&MutantStack<T>::operator=(MutantStack const &copy)
{
	std::cout << "[Stack created by assignment]" << std::endl;
	(void)copy;
	return (*this)
}
