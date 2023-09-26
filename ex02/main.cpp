/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:03:49 by elias             #+#    #+#             */
/*   Updated: 2023/09/26 15:13:40 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
        std::cout << "------- MUTANT STACK INT -------\n" << std::endl;
        MutantStack<int> mstack;
        mstack.push(111);
        mstack.push(17);
        std::cout << "Top element: " << mstack.top() << std::endl;
        std::cout << "Size: " << mstack.size() << std::endl;
        mstack.pop();
        std::cout << "Top element: " << mstack.top() << std::endl;
        std::cout << "Size: " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        while (it != mstack.end())
            std::cout << *it++ << std::endl;
    }
    return (0);
}