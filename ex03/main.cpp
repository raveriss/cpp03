/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:41:57 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/09 16:18:28 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

void displayStatus(const std::string& name, int hitPoints, int energyPoints) {
    std::cout << name << " has " << hitPoints << " hit points and "
              << energyPoints << " energy points left." << std::endl;
}

int main() {
    DiamondTrap dt("DiamondBoy");

    dt.whoAmI();
    dt.attack("Enemy");
    dt.takeDamage(30);
    dt.beRepaired(20);

    return 0;
}
