/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:07:38 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/04 14:18:33 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{

public:

    ClapTrap( std::string name );
    ~ClapTrap();
    ClapTrap(const ClapTrap &);
    ClapTrap &operator=(const ClapTrap& rhs);

    void    attack(std::string const& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    
private:

    std::string     _name;
    unsigned int    _hitPoints; //health
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

    ClapTrap();

};

#endif