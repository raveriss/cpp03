/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:31:54 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/08 17:40:01 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public:
		ClapTrap(); // Constructeur par défaut
		ClapTrap(const std::string &name); // Constructeur paramétré
		ClapTrap(const ClapTrap &source); // Constructeur de copie
		ClapTrap &operator=(const ClapTrap &source); // Opérateur d'affectation
		virtual ~ClapTrap(); // Destructeur

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
		unsigned int getHitPoints() const;
		unsigned int getAttackDamage() const;
		unsigned int getEnergyPoints() const;
};

#endif
