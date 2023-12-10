/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:52:21 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/10 15:57:13 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this-> _energyPoints= 50;
	this->_attackDamage = 20;
	std::cout << "_ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this-> _energyPoints= 50;
	this->_attackDamage = 20;
	std::cout << "_ScavTrap constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "_ScavTrap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "_ScavTrap destructor" << std::endl;
}

//should i call parent?
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "_ScavTrap copy assigment" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
	    this->_hitPoints = rhs._hitPoints;
	    this->_energyPoints = rhs._energyPoints;
	    this->_attackDamage = rhs._attackDamage;  
    }
	
	return *this;
}

// Public Methods
void    ScavTrap::attack(string const& target)
{
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        cout << "ScavTrap " << _name << " is out of energy!(or dead)" << endl;
        return;
    }
    cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
    _energyPoints -= 1;
}

void	ScavTrap::guardGate(void)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        cout << "ScavTrap " << _name << " is out of energy!(or dead)" << endl;
        return;
    }
	cout << "ScavTrap is now in Gate keeper mode." << endl;
}