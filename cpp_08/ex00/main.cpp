/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:33:04 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/10 22:26:52 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    std::vector<int>    vec(array, array + sizeof(array) / sizeof(int));

    easyfind(vec, 1);
    easyfind(vec, 10);

    return (0);    
}
