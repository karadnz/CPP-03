/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:49:40 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/10 17:55:33 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

//no mention of attack in subject check it
class FlagTrap: public ClapTrap
{
    public:
		FlagTrap();
        FlagTrap(std::string name);
		FlagTrap(const FlagTrap &copy);	

		~FlagTrap(); //virtual?

		FlagTrap &operator=(const FlagTrap &src);

		void attack(const string &target);
		void highFivesGuys(void);
};

#endif