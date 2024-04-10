/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:31:54 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 12:21:10 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

/**
 * @brief ClapTrap Classe - Gestion Robots Combat
 * @motclef classe, robots, combat, gestion, attributs privés, méthodes publiques
 * @attributs nom, points de vie, points d'énergie, dégâts d'attaque
 * @méthodes constructeur par défaut, constructeur paramétré, constructeur de copie,
 * opérateur d'affectation, destructeur, attaquer, recevoir dégâts, être réparé, accesseurs
 */
class ClapTrap {
protected:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    virtual ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getAttackDamage() const;
	unsigned int getEnergyPoints() const;
};

#endif

