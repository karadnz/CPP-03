/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:52:19 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/10 16:15:06 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
		ScavTrap();
        ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);	

		~ScavTrap(); //virtual?

		ScavTrap &operator=(const ScavTrap &src);

		void attack(const std::string &target);
		void guardGate(void);
};

#endif