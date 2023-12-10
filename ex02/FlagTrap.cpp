/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:49:42 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/10 17:54:31 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this-> _energyPoints= 100;
	this->_attackDamage = 30;
	std::cout << "_FlagTrap default constructor" << std::endl;
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this-> _energyPoints= 100;
	this->_attackDamage = 30;
	std::cout << "_FlagTrap constructor" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &copy): ClapTrap(copy)
{
	std::cout << "_FlagTrap copy constructor" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "_FlagTrap destructor" << std::endl;
}

//should i call parent?
FlagTrap &FlagTrap::operator=(const FlagTrap &rhs)
{
	std::cout << "_FlagTrap copy assigment" << std::endl;
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
void    FlagTrap::attack(string const& target)
{
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        cout << "FlagTrap " << _name << " is out of energy!(or dead)" << endl;
        return;
    }
    cout << "FlagTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
    _energyPoints -= 1;
}

void	FlagTrap::highFivesGuys(void)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        cout << "FlagTrap " << _name << " is out of energy!(or dead)" << endl;
        return;
    }
	cout << "FlagTrap high gives everyone!." << endl;
}
