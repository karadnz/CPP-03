/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:44:04 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/11 17:27:22 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap alakin("Alakin");
    ScavTrap patlamakin(alakin);
    ScavTrap kkilitci("Kkilitci");

    //ClapTrap *clap = new ScavTrap("clap them cheeks");
    //clap->attack("eleman");
    //delete clap;

    patlamakin = kkilitci;

    alakin.attack("Kkilitci");

    kkilitci.takeDamage(120);
    kkilitci.guardGate();
    kkilitci.beRepaired(100);
    kkilitci.guardGate();


    return 0;
}