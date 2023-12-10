/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:49:42 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/11 01:07:37 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this-> _energyPoints= 100;
	this->_attackDamage = 30;
	std::cout << "_FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this-> _energyPoints= 100;
	this->_attackDamage = 30;
	std::cout << "_FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "_FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "_FragTrap destructor" << std::endl;
}

//should i call parent?
FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "_FragTrap copy assigment" << std::endl;
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
void    FragTrap::attack(string const& target)
{
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        cout << "FragTrap " << _name << " is out of energy!(or dead)" << endl;
        return;
    }
    cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
    _energyPoints -= 1;
}

void	FragTrap::highFivesGuys(void)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        cout << "FragTrap " << _name << " is out of energy!(or dead)" << endl;
        return;
    }
	cout << "FragTrap high gives everyone!." << endl;
}
