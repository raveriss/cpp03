/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:41:57 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 12:55:40 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

/**
 * @brief Affichage état
 * @motclef fonction, affichage, état, points de vie, points d'énergie
 * @param nom, points de vie, points d'énergie
 * @action affiche état avec couleurs
 */
void displayStatus(const std::string& name, int hitPoints, int energyPoints)
{
    std::cout << "\033[34m" <<  name << " has " << hitPoints << " hit points and "
              << energyPoints << " energy points left." << std::endl << std::endl << "\033[0m";
}

/**
 * @brief Fonction principale démonstration ClapTrap
 * @motclef fonction principale, démonstration, attaque, réparation, affichage
 * @action création instances, affichage états, attaque, réception dégâts, réparation
 */
int main()
{
    ClapTrap claptrap("ClapTrap1");
    claptrap.attack("Dark Vador");
    displayStatus(claptrap.getName(), claptrap.getHitPoints(), claptrap.getEnergyPoints());
    claptrap.takeDamage(5);
    displayStatus(claptrap.getName(), claptrap.getHitPoints(), claptrap.getEnergyPoints());
    claptrap.beRepaired(3);
    displayStatus(claptrap.getName(), claptrap.getHitPoints(), claptrap.getEnergyPoints());

    // Création d'une instance de ScavTrap
    ScavTrap scavtrap("ScavTrap1");
    scavtrap.attack("Darth Maul");
    displayStatus(scavtrap.getName(), scavtrap.getHitPoints(), scavtrap.getEnergyPoints());
    scavtrap.takeDamage(20);
    displayStatus(scavtrap.getName(), scavtrap.getHitPoints(), scavtrap.getEnergyPoints());
    scavtrap.beRepaired(10);
    displayStatus(scavtrap.getName(), scavtrap.getHitPoints(), scavtrap.getEnergyPoints());
    scavtrap.guardGate();

    std::cout << std::endl;

    // Création d'une instance de FragTrap
    FragTrap fragtrap("FragTrap1");
    fragtrap.attack("Snoke");
    displayStatus(fragtrap.getName(), fragtrap.getHitPoints(), fragtrap.getEnergyPoints());
    fragtrap.takeDamage(30);
    displayStatus(fragtrap.getName(), fragtrap.getHitPoints(), fragtrap.getEnergyPoints());
    fragtrap.beRepaired(15);
    displayStatus(fragtrap.getName(), fragtrap.getHitPoints(), fragtrap.getEnergyPoints());
    fragtrap.highFivesGuys();

    return 0;
}
