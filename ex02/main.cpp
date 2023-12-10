/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:44:04 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/10 17:53:17 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int main( void )
{
    FlagTrap alakin("Alakin");
    FlagTrap patlamakin(alakin);
    FlagTrap kkilitci("Kkilitci");

    patlamakin = kkilitci;

    alakin.attack("Kkilitci");
    //However, its constructors, destructor and attack() will print different messages.
    //no mention of take damage in pdf
    kkilitci.takeDamage(120);
    kkilitci.highFivesGuys();
    kkilitci.beRepaired(100);
    kkilitci.highFivesGuys();


    return 0;
}