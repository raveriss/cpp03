/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:17:24 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 17:11:08 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/**
 * @brief Classe DiamondTrap, héritant de FragTrap et ScavTrap
 * @private name: nom du DiamondTrap
 * @public Constructeurs, opérateur d'affectation, destructeur
 * @public whoAmI: affiche les noms du DiamondTrap et du ClapTrap
 * @public attack: utilise explicitement l'attaque de ScavTrap
 */
class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string name;
		// int _attackDamage;
	
	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap();
		// void	attack(const std::string &target);
		void whoAmI();

		/**
		* @brief Utilise explicitement l'attaque de ScavTrap
		*/
		using ScavTrap::attack;
};

#endif
