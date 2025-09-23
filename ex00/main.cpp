/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:08:08 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/23 11:47:02 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main( void )
{
	ClapTrap a;
	a.attack("2");
	a.beRepaired(0);
	a.takeDamage(10);
	a.attack("2");
	
	// ClapTrap b("1");
	// b.attack("2");
	// b.beRepaired(100);
	// b.takeDamage(20);
	return (0);
}