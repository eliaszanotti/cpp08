/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/09/26 12:53:55 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H

# include <iostream>
# include <algorithm>
# include <vector>
# include <sstream>

class Span
{
	private:
		size_t				_size;
		std::vector<int>	_vector;
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		Span();
		Span(size_t n);
		Span(Span const &copy);
		~Span();

		// Operators
		Span const	&operator=(Span const &copy);

		// Methods
		void	addNumber(int number);
		int		shortestSpan(void);
		int		longestSpan(void);

		// Exceptions
		class StackFullException: public std::exception {
			public:
				virtual const char	*what(void) const throw();
		};      
		class StackEmptyException: public std::exception {
			public:
				virtual const char	*what(void) const throw();
		};
};

#endif