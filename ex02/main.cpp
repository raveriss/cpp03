/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:41:57 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/08 19:41:58 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void displayStatus(const std::string& name, int hitPoints, int energyPoints) {
    std::cout << name << " has " << hitPoints << " hit points and "
              << energyPoints << " energy points left." << std::endl;
}

int main() {
    // Création d'une instance de ClapTrap
    ClapTrap claptrap("ClapTrap1");
    claptrap.attack("target1");
    displayStatus(claptrap.getName(), claptrap.getHitPoints(), claptrap.getEnergyPoints());
    claptrap.takeDamage(5);
    displayStatus(claptrap.getName(), claptrap.getHitPoints(), claptrap.getEnergyPoints());
    claptrap.beRepaired(3);
    displayStatus(claptrap.getName(), claptrap.getHitPoints(), claptrap.getEnergyPoints());

    std::cout << std::endl;

    // Création d'une instance de ScavTrap
    ScavTrap scavtrap("ScavTrap1");
    scavtrap.attack("target2");
    displayStatus(scavtrap.getName(), scavtrap.getHitPoints(), scavtrap.getEnergyPoints());
    scavtrap.takeDamage(20);
    displayStatus(scavtrap.getName(), scavtrap.getHitPoints(), scavtrap.getEnergyPoints());
    scavtrap.beRepaired(10);
    displayStatus(scavtrap.getName(), scavtrap.getHitPoints(), scavtrap.getEnergyPoints());
    scavtrap.guardGate();

    std::cout << std::endl;

    // Création d'une instance de FragTrap
    FragTrap fragtrap("FragTrap1");
    fragtrap.attack("target3");
    displayStatus(fragtrap.getName(), fragtrap.getHitPoints(), fragtrap.getEnergyPoints());
    fragtrap.takeDamage(30);
    displayStatus(fragtrap.getName(), fragtrap.getHitPoints(), fragtrap.getEnergyPoints());
    fragtrap.beRepaired(15);
    displayStatus(fragtrap.getName(), fragtrap.getHitPoints(), fragtrap.getEnergyPoints());
    fragtrap.highFivesGuys();

    return 0;
}
