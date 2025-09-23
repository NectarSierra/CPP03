/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:08:08 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/23 12:04:02 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int main( void )
{
	ScavTrap a("Mickeal");
	a.guardGate();
	a.attack("2");
	a.beRepaired(1);
	a.takeDamage(20);

	// std::cout << std::endl;
	
	// ClapTrap b("Jackson");
	// b.attack("2");
	// b.beRepaired(100);
	// b.takeDamage(20);
	return (0);
}