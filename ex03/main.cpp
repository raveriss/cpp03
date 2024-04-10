/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:41:57 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 13:01:52 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

/**
 * @brief Affichage état
 * @motclef fonction, affichage, état, points de vie, points d'énergie
 * @param nom, points de vie, points d'énergie
 * @action affiche état avec couleurs
 */
void displayStatus(const std::string& name, int hitPoints, int energyPoints)
{
    std::cout   << "\033[34m" <<  name << " has " << hitPoints 
                << " hit points and " << energyPoints << " energy points left." 
                << std::endl << std::endl << "\033[0m";
}

/**
 * @brief Fonction principale démonstration ClapTrap
 * @motclef fonction principale, démonstration, attaque, réparation, affichage
 * @action création instances, affichage états, attaque, réception dégâts, réparation
 */
int main() {
    DiamondTrap dt("DiamondBoy");
    displayStatus(dt.getName(), dt.getHitPoints(), dt.getEnergyPoints());

    dt.whoAmI();
    dt.attack("Dark Vador");
    displayStatus(dt.getName(), dt.getHitPoints(), dt.getEnergyPoints());
    dt.takeDamage(30);
    displayStatus(dt.getName(), dt.getHitPoints(), dt.getEnergyPoints());
    dt.beRepaired(20);
    displayStatus(dt.getName(), dt.getHitPoints(), dt.getEnergyPoints());

    return 0;
}
