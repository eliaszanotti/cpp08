/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/09/26 14:58:37 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_H
# define MUTANTSTACK_CLASS_H

# include <iostream>
# include <stack>
# include <list>
# include <algorithm>

template<typename T>
class MutantStack: public std::stack<T> 
{
	public:
		// Constructors
		MutantStack();
		MutantStack(MutantStack const &copy);
		~MutantStack();

		// Operators
		MutantStack const	&operator=(MutantStack const &copy);

		// Methods
        typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}
};

#endif