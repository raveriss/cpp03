/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:33:33 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 19:33:41 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap claptrapA("CT-A");
    ClapTrap claptrapB("CT-B");

    std::cout << "--- Attacking ---" << std::endl;
    claptrapA.attack("CT-B");
    claptrapB.takeDamage(0); // Adjust this to match the expected attack damage

    std::cout << "--- Taking Damage ---" << std::endl;
    claptrapB.takeDamage(2);

    std::cout << "--- Repairing ---" << std::endl;
    claptrapB.beRepaired(5);

    return 0;
}
