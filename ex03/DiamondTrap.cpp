/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:17:41 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/11 11:19:10 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <stdio.h>

/**
 * @brief Constructeur par défaut de DiamondTrap
 * @param name: nom du DiamondTrap
 * @inherits ClapTrap, FragTrap, ScavTrap
 * @output Affiche le message de construction
 */
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(){
	_name = "default";
	this->_hitPoints = FragTrap_hitPoints;  // Hérite de FragTrap
    this->_energyPoints = ScavTrap_energyPoints;  // Hérite de ScavTrap
    this->_attackDamage = FragTrap_attackDamage;

	std::cout << "DiamondTrap " << _name << " is constructed." << std::endl;
}

/**
 * @brief Constructeur avec paramètre de DiamondTrap
 * @param name: nom du DiamondTrap
 * @inherits ClapTrap, FragTrap, ScavTrap
 * @output Affiche le message de construction
 */
DiamondTrap::DiamondTrap(const std::string & name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap() {
	this->_name = name;
    _hitPoints = FragTrap_hitPoints;
    _energyPoints = ScavTrap_energyPoints;
    _attackDamage = FragTrap_attackDamage; // Choisissez une valeur appropriée pour DiamondTrap
    std::cout << "DiamondTrap " << _name << " is constructed with attack damage " << _attackDamage << "." << std::endl;
}


/**
 * @brief Constructeur de copie de DiamondTrap
 * @param other: instance de DiamondTrap à copier
 * @inherits ClapTrap, FragTrap, ScavTrap
 * @output Affiche le message de copie
 */
DiamondTrap::DiamondTrap(const DiamondTrap & other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
	*this = other;
	std::cout << "DiamondTrap " << _name << " is copied." << std::endl;
}

/**
 * @brief Opérateur d'affectation de DiamondTrap
 * @param other: instance de DiamondTrap à affecter
 * @return Référence sur l'instance courante
 * @inherits ClapTrap::operator=
 */
DiamondTrap & DiamondTrap::operator=(const DiamondTrap & other) {
	if (this != & other) {
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return *this;
}

/**
 * @brief Destructeur de DiamondTrap
 * @output Affiche le message de destruction
 */
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " is destructed." << std::endl;
}

/**
 * @brief Affiche les noms du DiamondTrap et du ClapTrap
 * @output Affiche les noms
 */
void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is " << _name << " and ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}
