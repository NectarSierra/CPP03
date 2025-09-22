/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:08:23 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/22 14:32:06 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

// Constructor(void|const int|const float), copy constructor, destructor;
ClapTrap::ClapTrap	( std::string name ) : name(name)
{
	std::cout << "Default constructor called" << std::endl;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap	( const ClapTrap &obj )
{
	*this = obj;
}

ClapTrap::~ClapTrap	( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Overload Operators;
const ClapTrap& ClapTrap::operator=	( const ClapTrap &obj )
{
	this->name = obj.name;
	this->Hit_points = obj.Hit_points;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
	return (*this);
}

// Member Functions;
void ClapTrap::attack	( const std::string& target )
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage	( unsigned int amount )
{
	this->Hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage! It has now " << this->Hit_points << " hit points."<< std::endl;
}

void ClapTrap::beRepaired	( unsigned int amount )
{
	this->Hit_points += amount;
	std::cout << "ClapTrap " << this->name << " repair itself, it regains " << amount << " hit points. It has now " << this->Hit_points << " hit points."<< std::endl;
}