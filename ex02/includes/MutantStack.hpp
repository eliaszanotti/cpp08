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

#ifndef MUTANTSTACK_CLASS_H
# define MUTANTSTACK_CLASS_H

# include <iostream>

class MutantStack
{
	private:
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		MutantStack();
		MutantStack(MutantStack const &copy);
		~MutantStack();

		// Operators
		MutantStack const	&operator=(MutantStack const &copy);

		// Methods
		
};

#endif