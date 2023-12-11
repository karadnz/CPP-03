/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:49:40 by mkaraden          #+#    #+#             */
/*   Updated: 2023/12/11 17:58:35 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
		FragTrap();
        FragTrap(std::string name);
		FragTrap(const FragTrap &copy);	

		~FragTrap();

		FragTrap &operator=(const FragTrap &src);

		void highFivesGuys(void);
};

#endif