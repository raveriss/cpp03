/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:41:57 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/09 20:03:32 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

void displayStatus(const std::string& name, int hitPoints, int energyPoints) {
    std::cout << "\033[34m" <<  name << " has " << hitPoints << " hit points and "
              << energyPoints << " energy points left." << std::endl << std::endl << "\033[0m";
}

int main() {
    DiamondTrap dt("DiamondBoy");
    displayStatus(dt.getName(), dt.getHitPoints(), dt.getEnergyPoints());

    dt.whoAmI();
    dt.attack("Enemy");
    displayStatus(dt.getName(), dt.getHitPoints(), dt.getEnergyPoints());
    dt.takeDamage(30);
    displayStatus(dt.getName(), dt.getHitPoints(), dt.getEnergyPoints());
    dt.beRepaired(20);
    displayStatus(dt.getName(), dt.getHitPoints(), dt.getEnergyPoints());

    return 0;
}
