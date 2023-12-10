/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:49:40 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/11 01:07:26 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

//no mention of attack in subject check it
class FragTrap: public ClapTrap
{
    public:
		FragTrap();
        FragTrap(std::string name);
		FragTrap(const FragTrap &copy);	

		~FragTrap(); //virtual?

		FragTrap &operator=(const FragTrap &src);

		void attack(const string &target);
		void highFivesGuys(void);
};

#endif