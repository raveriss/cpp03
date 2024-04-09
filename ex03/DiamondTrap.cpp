/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:17:41 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/09 19:37:43 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap() {
    name = "default";
    std::cout << "DiamondTrap " << name << " is constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
    std::cout << "DiamondTrap " << this->name << " is constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    *this = other;
    std::cout << "DiamondTrap " << name << " is copied." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        name = other.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " is destructed." << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is " << name << " and ClapTrap name is " << ClapTrap::name << "." << std::endl;
}
