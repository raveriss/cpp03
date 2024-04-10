/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:17:41 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 12:48:59 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut de DiamondTrap
 * @param name: nom du DiamondTrap
 * @inherits ClapTrap, FragTrap, ScavTrap
 * @output Affiche le message de construction
 */
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap() {
	name = "default";
	std::cout << "DiamondTrap " << name << " is constructed." << std::endl;
}

/**
 * @brief Constructeur avec paramètre de DiamondTrap
 * @param name: nom du DiamondTrap
 * @inherits ClapTrap, FragTrap, ScavTrap
 * @output Affiche le message de construction
 */
DiamondTrap::DiamondTrap(const std::string & name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	this->name = name;
	std::cout << "DiamondTrap " << this->name << " is constructed." << std::endl;
}

/**
 * @brief Constructeur de copie de DiamondTrap
 * @param other: instance de DiamondTrap à copier
 * @inherits ClapTrap, FragTrap, ScavTrap
 * @output Affiche le message de copie
 */
DiamondTrap::DiamondTrap(const DiamondTrap & other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
	*this = other;
	std::cout << "DiamondTrap " << name << " is copied." << std::endl;
}

/**
 * @brief Opérateur d'affectation de DiamondTrap
 * @param other: instance de DiamondTrap à affecter
 * @return Référence sur l'instance courante
 * @inherits ClapTrap::operator=
 */
DiamondTrap & DiamondTrap::operator=(const DiamondTrap & other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		name = other.name;
	}
	return *this;
}

/**
 * @brief Destructeur de DiamondTrap
 * @output Affiche le message de destruction
 */
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " is destructed." << std::endl;
}

/**
 * @brief Affiche les noms du DiamondTrap et du ClapTrap
 * @output Affiche les noms
 */
void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is " << name << " and ClapTrap name is " << ClapTrap::name << "." << std::endl;
}
