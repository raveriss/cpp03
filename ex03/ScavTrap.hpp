/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:50:02 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/11 11:20:30 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define ScavTrap_energyPoints 50

/**
 * @brief Classe ScavTrap - Extension de ClapTrap
 * @motclef classe, héritage, ClapTrap, ScavTrap, mode Gardien
 * @méthodes constructeur par défaut, paramétré, de copie, d'affectation, destructeur,
 * attaque, activation mode Gardien
 */
class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const std::string & name);
    ScavTrap(const ScavTrap & other);
    ScavTrap & operator=(const ScavTrap & other);
    ~ScavTrap();

    void attack(const std::string & target);
    void guardGate();
};

#endif
