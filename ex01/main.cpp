/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:33:33 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 12:52:49 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

/**
 * @brief Fonction principale démonstration ClapTrap
 * @motclef fonction principale, démonstration, attaque, réparation, affichage
 * @action création instances, affichage états, attaque, réception dégâts, réparation
 */
int main() {
    ClapTrap ct1("Clapton");
    ScavTrap st1("Serena");

    ct1.attack("Dark Vador");
    std::cout << "\033[34m" << ct1.getName() << " après attaque : " 
              << ct1.getHitPoints() << " HP, "
              << ct1.getEnergyPoints() << " EP." << std::endl << std::endl << "\033[0m";

    ct1.takeDamage(10);
    std::cout << "\033[34m" << ct1.getName() << " après avoir pris des dégâts : " 
              << ct1.getHitPoints() << " HP, "
              << ct1.getEnergyPoints() << " EP." << std::endl << std::endl << "\033[0m";

    ct1.beRepaired(5);
    std::cout << "\033[34m" << ct1.getName() << " après réparation : " 
              << ct1.getHitPoints() << " HP, "
              << ct1.getEnergyPoints() << " EP." << std::endl << std::endl << "\033[0m";

    st1.attack("Darth Maul");
    std::cout << "\033[34m" << st1.getName() << " après attaque : " 
              << st1.getHitPoints() << " HP, "
              << st1.getEnergyPoints() << " EP." << std::endl << std::endl << "\033[0m";

    st1.takeDamage(20);
    std::cout << "\033[34m" << st1.getName() << " après avoir pris des dégâts : " 
              << st1.getHitPoints() << " HP, "
              << st1.getEnergyPoints() << " EP." << std::endl <<  std::endl <<"\033[0m";

    st1.beRepaired(10);
    std::cout << "\033[34m" << st1.getName() << " après réparation : " 
              << st1.getHitPoints() << " HP, "
              << st1.getEnergyPoints() << " EP." << std::endl << std::endl << "\033[0m";


    st1.guardGate();

    return 0;
}



