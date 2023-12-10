/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:44:04 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/10 15:56:43 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap alakin("Alakin");
    ScavTrap patlamakin(alakin);
    ScavTrap kkilitci("Kkilitci");

    patlamakin = kkilitci;

    alakin.attack("Kkilitci");
    //However, its constructors, destructor and attack() will print different messages.
    //no mention of take damage in pdf
    kkilitci.takeDamage(120);
    kkilitci.guardGate();
    kkilitci.beRepaired(100);
    kkilitci.guardGate();


    return EXIT_SUCCESS;
}