/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:12:02 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/10 12:23:03 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

/**
 * @brief Classe FragTrap - Extension de ClapTrap
 * @motclef classe, héritage, ClapTrap, FragTrap, demande high five
 * @méthodes constructeur par défaut, paramétré, de copie, d'affectation, destructeur,
 * demande high five, attaque
 */
class FragTrap : virtual public ClapTrap {
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    virtual ~FragTrap();

    void highFivesGuys(void) const;
    void attack(const std::string& target);
};

#endif
