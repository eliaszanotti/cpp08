/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:49:10 by elias             #+#    #+#             */
/*   Updated: 2023/09/25 12:46:22 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class ItemNotFoundException : public std::exception
{
    virtual const char* what() const throw()
    {
        return ("\e[31m[ERROR]\e[0m item not found");
    }
};

template<typename T>
void    easyfind(T &vector, int intToFind)
{
    std::vector<int>::iterator  pos;
    
    pos = std::find(vector.begin(), vector.end(), intToFind);
    if (pos == vector.end())
        throw (ItemNotFoundException());
    else
        std::cout << "\e[32m[FIND]\e[0m at pos " << *pos << std::endl;    
}

#endif