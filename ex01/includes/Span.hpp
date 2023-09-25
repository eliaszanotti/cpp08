/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/09/25 13:10:23 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H

# include <iostream>

class Span
{
	private:
		size_t	_size;
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
		void	addNumber(size_t number);
		size_t	shortestSpan(void) const;
		size_t	longestSpan(void) const;
};

#endif