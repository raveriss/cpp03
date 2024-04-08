/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:33:33 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/08 17:43:08 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    // Création de deux instances de ClapTrap
    ClapTrap CT_A("CT-A");
    ClapTrap CT_B("CT-B");

    // Affichage initial des points de vie et d'énergie
    std::cout << "Début:" << std::endl;
    std::cout << CT_A.getName() << " a " << CT_A.getHitPoints() << " points de vie et "
              << CT_A.getEnergyPoints() << " points d'énergie." << std::endl;
    std::cout << CT_B.getName() << " a " << CT_B.getHitPoints() << " points de vie et "
              << CT_B.getEnergyPoints() << " points d'énergie." << std::endl;

    // CT-A attaque CT-B
    CT_A.attack(CT_B.getName());
    CT_B.takeDamage(CT_A.getAttackDamage());

    // Affichage des points de vie et d'énergie après l'attaque
    std::cout << "\nAprès l'attaque de " << CT_A.getName() << " sur " << CT_B.getName() << ":" << std::endl;
    std::cout << CT_A.getName() << " a " << CT_A.getHitPoints() << " points de vie et "
              << CT_A.getEnergyPoints() << " points d'énergie." << std::endl;
    std::cout << CT_B.getName() << " a " << CT_B.getHitPoints() << " points de vie et "
              << CT_B.getEnergyPoints() << " points d'énergie." << std::endl;

    // CT-A se répare
    CT_A.beRepaired(5);

    // Affichage final des points de vie et d'énergie après la réparation
    std::cout << "\nAprès la réparation de " << CT_A.getName() << ":" << std::endl;
    std::cout << CT_A.getName() << " a " << CT_A.getHitPoints() << " points de vie et "
              << CT_A.getEnergyPoints() << " points d'énergie." << std::endl;
    std::cout << CT_B.getName() << " a " << CT_B.getHitPoints() << " points de vie et "
              << CT_B.getEnergyPoints() << " points d'énergie." << std::endl;

    return 0;
}


