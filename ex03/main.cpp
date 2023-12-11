/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:44:04 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/11 17:59:29 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{

	DiamondTrap yyalin;
	DiamondTrap kkilitci("kkilitci");
	DiamondTrap alakin(kkilitci);

	yyalin.whoAmI();
	yyalin.attack("muhammed ali dede");
	
	kkilitci.whoAmI();
	kkilitci.attack("alakin");

	alakin.whoAmI();
	alakin.attack("mtoktas");

	yyalin = alakin;

	yyalin.whoAmI();
	return (0);
}
