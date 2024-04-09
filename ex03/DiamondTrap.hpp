/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:17:24 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/09 16:29:09 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string name;
    
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &other);
        ~DiamondTrap();

        void whoAmI();

        using ScavTrap::attack; // Utiliser explicitement l'attack de ScavTrap
};

#endif
