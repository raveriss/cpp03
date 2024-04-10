/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:32:08 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 17:59:00 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut ClapTrap
 * @motclef constructeur, défaut, initialisation, affichage construction
 * @initialisation nom par défaut, points de vie, points d'énergie, dégâts d'attaque
 */
ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed." << std::endl;
}

/**
 * @brief Constructeur paramétré ClapTrap
 * @motclef constructeur, paramétré, initialisation, affichage construction
 * @param name, points de vie, points d'énergie, dégâts d'attaque
 */
ClapTrap::ClapTrap(const std::string & name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " constructed." << std::endl;
}

/**
 * @brief Constructeur de copie ClapTrap
 * @motclef constructeur, copie, affichage copié
 * @action copie attributs, affiche nom copié
 */
ClapTrap::ClapTrap(const ClapTrap & source)
{
	*this = source;
	std::cout << "ClapTrap " << _name << " copied." << std::endl;
}

/**
 * @brief Opérateur d'affectation ClapTrap
 * @motclef opérateur, affectation, vérification auto-affectation
 * @action copie sécurisée attributs si différent de source
 */
ClapTrap & ClapTrap::operator=(const ClapTrap & source)
{
	if (this != & source)
	{
		_name = source._name;
		_hitPoints = source._hitPoints;
		_energyPoints = source._energyPoints;
		_attackDamage = source._attackDamage;
	}
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	return *this;
}

/**
 * @brief Destructeur ClapTrap
 * @motclef destructeur, affichage destruction
 * @action affiche nom détruit
 */
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructed." << std::endl;
}

/**
 * @brief Attaque cible ClapTrap
 * @motclef méthode, attaque, vérification points d'énergie et de vie
 * @action attaque cible, réduction points d'énergie, affichage attaque
 */
void ClapTrap::attack(const std::string & target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack because it's out of energy or hit points." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	--_energyPoints;
}

/**
 * @brief Réception dégâts ClapTrap
 * @motclef méthode, réception dégâts, vérification points de vie
 * @action réduit points de vie, affichage dégâts reçus
 */
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't take more damage, it's already down!" << std::endl;
		return;
	}
	_hitPoints -= (amount > _hitPoints) ? _hitPoints : amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
}

/**
 * @brief Réparation ClapTrap
 * @motclef méthode, réparation, vérification points d'énergie et de vie
 * @action regagne points de vie, réduction points d'énergie, affichage réparation
 */
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself because it's out of energy or hit points." << std::endl;
		return;
	}
	_hitPoints += amount;
	--_energyPoints;
	std::cout << "ClapTrap " << _name << " repairs itself, regaining " << amount << " hit points!" << std::endl;
}

/**
 * @brief Accesseur nom ClapTrap
 * @motclef accesseur, nom
 * @retour nom ClapTrap
 */
std::string ClapTrap::getName() const {
    return _name;
}

/**
 * @brief Accesseur points de vie ClapTrap
 * @motclef accesseur, points de vie
 * @retour points de vie ClapTrap
 */
unsigned int ClapTrap::getHitPoints() const {
    return _hitPoints;
}

/**
 * @brief Accesseur dégâts d'attaque ClapTrap
 * @motclef accesseur, dégâts d'attaque
 * @retour dégâts d'attaque ClapTrap
 */
unsigned int ClapTrap::getAttackDamage() const {
    return _attackDamage;
}

/**
 * @brief Accesseur points d'énergie ClapTrap
 * @motclef accesseur, points d'énergie
 * @retour points d'énergie ClapTrap
 */
unsigned int ClapTrap::getEnergyPoints() const {
    return _energyPoints;
}
