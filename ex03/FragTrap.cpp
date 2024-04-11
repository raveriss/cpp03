/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:28:44 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/11 11:19:45 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut FragTrap
 */
FragTrap::FragTrap() : ClapTrap("FragTrap_default") {
    _hitPoints = FragTrap_hitPoints;
    _energyPoints = 100;
    _attackDamage = FragTrap_attackDamage;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

/**
 * @brief Constructeur paramétré FragTrap
 */
FragTrap::FragTrap(const std::string & name) : ClapTrap(name) {
    _hitPoints = FragTrap_hitPoints;
    _energyPoints = 100;
    _attackDamage = FragTrap_attackDamage;
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

/**
 * @brief Constructeur de copie FragTrap
 */
FragTrap::FragTrap(const FragTrap & other) : ClapTrap(other) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation FragTrap
 */
FragTrap & FragTrap::operator=(const FragTrap & other) {
    if (this != & other) {
        ClapTrap::operator=(other); // Appel à l'opérateur d'affectation de base
    }
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    return *this;
}

/**
 * @brief Destructeur FragTrap
 */
FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
}

/**
 * @brief Attaque cible FragTrap
 */
void FragTrap::attack(const std::string & target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "FragTrap " << _name << " has not enough energy or is dead." << std::endl;
    }
}

/**
 * @brief Demande de high five FragTrap
 * @motclef méthode, FragTrap, demande high five
 * @action affiche demande de high five
 */
void FragTrap::highFivesGuys(void) const {
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
