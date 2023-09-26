/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:12:15 by elias             #+#    #+#             */
/*   Updated: 2023/09/26 13:44:31 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		try
		{
			std::cout << "------- STACK FULL -------\n" << std::endl;
			Span stack(100);
			std::cout << "\e[37m[STACK]\t\t[0]...[99]\e[0m" << std::endl;
			for(int i = 0; i < 101; i++)
				stack.addNumber(i);
		}
		catch(const std::exception& error)
		{
			std::cerr << error.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << "\n------- 1 ELEMENT -------\n" << std::endl;
			Span stack(1);
			std::cout << "\e[37m[STACK]\t\t[1]\e[0m" << std::endl;
			stack.addNumber(1);
			int maxSpan = stack.longestSpan();
			int minSpan = stack.shortestSpan();
			std::cout << "\e[34m[MAX]\e[0m\t\t" << maxSpan << std::endl;
			std::cout << "\e[34m[MIN]\e[0m\t\t" << minSpan << std::endl;
		}
		catch(const std::exception& error)
		{
			std::cerr << error.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "\n------- MAX & MIN SPAN -------\n" << std::endl;
			Span stack(5);
			std::cout << "\e[37m[STACK]\t\t[6][3][17][9][11]\e[0m" << std::endl;
			stack.addNumber(6);
			stack.addNumber(3);
			stack.addNumber(17);
			stack.addNumber(9);
			stack.addNumber(11);
			int maxSpan = stack.longestSpan();
			int minSpan = stack.shortestSpan();
			std::cout << "\e[34m[MAX]\e[0m\t\t" << maxSpan << std::endl;
			std::cout << "\e[34m[MIN]\e[0m\t\t" << minSpan << std::endl;
		}
		catch(const std::exception& error)
		{
			std::cerr << error.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "\n------- BIG STACK-------\n" << std::endl;
			Span stack(10000);
			std::cout << "\e[37m[STACK]\t\t[0]...[9999]\e[0m" << std::endl;
			std::vector<int> vector1;
			for(int i(0); i < 10000; i++)
				vector1.push_back(i);
			stack.addNumber(vector1.begin(), vector1.end());
			int maxSpan = stack.longestSpan();
			int minSpan = stack.shortestSpan();
			std::cout << "\e[34m[MAX]\e[0m\t\t" << maxSpan << std::endl;
			std::cout << "\e[34m[MIN]\e[0m\t\t" << minSpan << std::endl;
		}
		catch(const std::exception& error)
		{
			std::cerr << error.what() << '\n';
		}
	}
    return (0);
}