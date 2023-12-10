/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:09:44 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:51 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    cout << "ClapTrap default constructor" << endl;
}

ClapTrap::ClapTrap(string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    cout << "ClapTrap constructor" << endl;
}

ClapTrap::~ClapTrap(void)
{
    cout << "ClapTrap destructor" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    cout << "ClapTrap copy constructor" << endl;
    *this = rhs;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& rhs)
{
    cout << "ClapTrap copy assigment" << endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;    
    }
    return *this;
}

void    ClapTrap::attack(string const& target)
{
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        cout << "ClapTrap " << _name << " is out of energy!(or dead)" << endl;
        return;
    }
    cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
    _energyPoints -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= amount)
    {
        cout << "ClapTrap " << _name << " is dead!" << endl;
        _hitPoints = 0;
        return;
    }
    cout << "ClapTrap " << _name << " takes " << amount << " damage!" << endl;
    _hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0)
    {
        cout << "ClapTrap " << _name << " is out of energy!" << endl;
        return;
    }
    cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << endl;
    _energyPoints -= 1;
    _hitPoints += amount;
}
