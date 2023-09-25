/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:48:53 by elias             #+#    #+#             */
/*   Updated: 2023/09/25 12:48:40 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{    
    {
        std::vector<int>    vector;

        for (int i = 0; i < 10; i++)
            vector.push_back(i);
        try
        {
            easyfind(vector, 0);
            easyfind(vector, 5);
            easyfind(vector, 9);
            easyfind(vector, 10);
        }
        catch(const std::exception& error)
        {
            std::cerr << error.what() << std::endl;
        }
    }
    {
        std::vector<int>    vector;

        vector.push_back(10);
        vector.push_back(42);
        vector.push_back(69);
        try
        {
            easyfind(vector, 10);
            easyfind(vector, 42);
            easyfind(vector, 41);
            easyfind(vector, 69);
        }
        catch(const std::exception& error)
        {
            std::cerr << error.what() << std::endl;
        }
    }
    return (0);
}