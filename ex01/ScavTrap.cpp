/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:16:59 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 11:27:36 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut ScavTrap
 * @motclef constructeur, défaut, héritage ClapTrap, initialisation spécifique
 * @initialisation nom par défaut, points de vie, points d'énergie, dégâts d'attaque
 */
ScavTrap::ScavTrap() : ClapTrap("ScavTrap_default")
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

/**
 * @brief Constructeur paramétré ScavTrap
 * @motclef constructeur, paramétré, héritage ClapTrap, initialisation spécifique
 * @param nom, initialisation points de vie, points d'énergie, dégâts d'attaque
 */
ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

/**
 * @brief Constructeur de copie ScavTrap
 * @motclef constructeur, copie, héritage ClapTrap
 * @action copie attributs via ClapTrap, affichage construction copie
 */
ScavTrap::ScavTrap(const ScavTrap & other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation ScavTrap
 * @motclef opérateur, affectation, héritage ClapTrap
 * @action utilise opérateur d'affectation de ClapTrap, affichage affectation
 */
ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
    ClapTrap::operator=(other);
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    return *this;
}

/**
 * @brief Destructeur ScavTrap
 * @motclef destructeur, affichage destruction
 * @action affiche destruction ScavTrap
 */
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

/**
 * @brief Attaque cible ScavTrap
 * @motclef méthode, attaque, vérification énergie et vie
 * @action attaque cible, réduit énergie, affiche résultat attaque
 */
void ScavTrap::attack(const std::string& target)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
    {
        std::cout << "ScavTrap " << name << " has not enough energy or is dead." << std::endl;
    }
}

/**
 * @brief Activation mode Gardien
 * @motclef méthode, mode Gardien, ScavTrap
 * @action active mode Gardien, affiche activation
 */
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
