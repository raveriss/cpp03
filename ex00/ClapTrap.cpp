/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:32:08 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/08 17:40:08 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	*this = source;
	std::cout << "ClapTrap " << name << " copied." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
	if (this != &source)
	{
		name = source.name;
		hitPoints = source.hitPoints;
		energyPoints = source.energyPoints;
		attackDamage = source.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " can't attack because it's out of energy or hit points." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	--energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " can't take more damage, it's already down!" << std::endl;
		return;
	}
	hitPoints -= (amount > hitPoints) ? hitPoints : amount;
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " can't repair itself because it's out of energy or hit points." << std::endl;
		return;
	}
	hitPoints += amount;
	--energyPoints;
	std::cout << "ClapTrap " << name << " repairs itself, regaining " << amount << " hit points!" << std::endl;
}

std::string ClapTrap::getName() const {
    return name;
}

unsigned int ClapTrap::getHitPoints() const {
    return hitPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
    return attackDamage;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}

