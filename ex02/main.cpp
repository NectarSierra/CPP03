/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:08:08 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/23 15:18:39 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

int main( void )
{
	FragTrap* a = new FragTrap("A");
	delete a;

	std::cout << std::endl;

	FragTrap* b = new FragTrap("B");
	b->highFivesGuys();
	b->beRepaired(50);
	b->takeDamage(100);
	b->attack("TEST");
	b->takeDamage(1000);
	b->attack("TEST");
	delete b;
	
	
	return (0);
}