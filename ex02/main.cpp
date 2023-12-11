/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:44:04 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/11 17:35:45 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap alakin("Alakin");
    FragTrap patlamakin(alakin);
    FragTrap kkilitci("Kkilitci");

    patlamakin = kkilitci;

    alakin.attack("Kkilitci");

    kkilitci.takeDamage(120);
    kkilitci.highFivesGuys();
    kkilitci.beRepaired(100);
    kkilitci.highFivesGuys();


    return 0;
}