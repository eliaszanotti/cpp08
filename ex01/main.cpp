/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:12:15 by elias             #+#    #+#             */
/*   Updated: 2023/09/25 15:02:27 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		try
		{
			// std::cout << "\n------- STACK FULL -------\n\n" << std::endl;
			// Span stack(100);
			// for(int i = 0; i < 100; i++)
				// stack.addNumber(i);
			// stack.addNumber(100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    return (0);
}