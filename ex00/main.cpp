/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:33:33 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 12:59:32 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/**
 * @brief Fonction principale démonstration ClapTrap
 * @motclef fonction principale, démonstration, attaque, réparation, affichage
 * @action création instances, affichage états, attaque, réception dégâts, réparation
 */
int main() {
    // Création de deux instances de ClapTrap
    ClapTrap CT_A("CT-A");
    ClapTrap CT_B("CT-B");

    // Affichage initial des points de vie et d'énergie
    std::cout << "\033[34m" << "Début:" << std::endl;
    std::cout <<  "\033[34m" <<CT_A.getName() << " a " << CT_A.getHitPoints() << " points de vie et "
              << CT_A.getEnergyPoints() << " points d'énergie." << std::endl << "\033[0m";
    std::cout <<  "\033[34m" <<CT_B.getName() << " a " << CT_B.getHitPoints() << " points de vie et "
              << CT_B.getEnergyPoints() << " points d'énergie." << std::endl << "\033[0m";

    CT_A.attack("Dark Vador");
    CT_B.attack("Darth Maul");

    // Affichage des points de vie et d'énergie après l'attaque
    std::cout << "\033[34m" << "\nAprès l'attaque de " << CT_A.getName() << " sur " << CT_B.getName() << ":" << std::endl << "\033[0m";
    std::cout <<  "\033[34m" << CT_A.getName() << " a " << CT_A.getHitPoints() << " points de vie et "
              << CT_A.getEnergyPoints() << " points d'énergie." << std::endl << "\033[0m";
    std::cout <<  "\033[34m" << CT_B.getName() << " a " << CT_B.getHitPoints() << " points de vie et "
              << CT_B.getEnergyPoints() << " points d'énergie." << std::endl << "\033[0m";

    // CT-A se répare
    CT_A.beRepaired(5);

    // Affichage final des points de vie et d'énergie après la réparation
    std::cout << "\033[34m" << "\nAprès la réparation de " << CT_A.getName() << ":" << std::endl << "\033[0m";
    std::cout <<  "\033[34m" << CT_A.getName() << " a " << CT_A.getHitPoints() << " points de vie et "
              << CT_A.getEnergyPoints() << " points d'énergie." << std::endl << "\033[0m";
    std::cout <<  "\033[34m" << CT_B.getName() << " a " << CT_B.getHitPoints() << " points de vie et "
              << CT_B.getEnergyPoints() << " points d'énergie." << std::endl << "\033[0m";

    return 0;
}


