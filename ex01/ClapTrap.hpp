/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:07:38 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/11 17:26:09 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(string name);
		
		virtual ~ClapTrap();
		ClapTrap &operator=(const ClapTrap &src);

		void attack(const string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		string _name;
		unsigned int _hitPoints; //health
		unsigned int _energyPoints;
		unsigned int _attackDamage;
};

#endif