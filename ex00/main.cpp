/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:44:04 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/10 14:48:02 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap alakin("Alakin");
    ClapTrap patlamakin(alakin);
    ClapTrap kkilitci("Kkilitci");

    patlamakin = kkilitci;

    alakin.attack("Kkilitci");
    kkilitci.takeDamage(20);
    kkilitci.attack("Alakin");
    kkilitci.beRepaired(50);
    kkilitci.attack("Alakin");


    return EXIT_SUCCESS;
}