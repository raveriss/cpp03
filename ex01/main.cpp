/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:33:33 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/08 18:22:51 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    // Création d'instances de ClapTrap et ScavTrap
    ClapTrap ct1("Clapton");
    ScavTrap st1("Serena");

    std::cout << "\nDébut des tests pour ClapTrap et ScavTrap.\n" << std::endl;

    // Tests des fonctionnalités de ClapTrap
    ct1.attack("Tonclap");
    std::cout << ct1.getName() << " après attaque : " 
              << ct1.getHitPoints() << " HP, "
              << ct1.getEnergyPoints() << " EP." << std::endl;

    ct1.takeDamage(10);
    std::cout << ct1.getName() << " après avoir pris des dégâts : " 
              << ct1.getHitPoints() << " HP, "
              << ct1.getEnergyPoints() << " EP." << std::endl;

    ct1.beRepaired(5);
    std::cout << ct1.getName() << " après réparation : " 
              << ct1.getHitPoints() << " HP, "
              << ct1.getEnergyPoints() << " EP." << std::endl;

    // Tests des fonctionnalités de ScavTrap avec la même interface que ClapTrap
    st1.attack("un autre ennemi");
    std::cout << st1.getName() << " après attaque : " 
              << st1.getHitPoints() << " HP, "
              << st1.getEnergyPoints() << " EP." << std::endl;

    st1.takeDamage(20);
    std::cout << st1.getName() << " après avoir pris des dégâts : " 
              << st1.getHitPoints() << " HP, "
              << st1.getEnergyPoints() << " EP." << std::endl;

    st1.beRepaired(10);
    std::cout << st1.getName() << " après réparation : " 
              << st1.getHitPoints() << " HP, "
              << st1.getEnergyPoints() << " EP." << std::endl;

    // Tests des fonctionnalités spécifiques à ScavTrap
    st1.guardGate();
    // Ici, vous pouvez ajouter une impression si guardGate modifie l'état de l'objet

    // Ajout de tests supplémentaires si ScavTrap a d'autres méthodes uniques
    // st1.someUniqueScavTrapMethod();

    return 0;
}



