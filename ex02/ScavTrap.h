/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:17:38 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/24 08:16:24 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	public:
		// Constructor( void | std::string ), copy constructor, destructor;
		ScavTrap					( void );
		ScavTrap					( std::string name );
		// ScavTrap					( const ScavTrap &obj );
		~ScavTrap					( void );
		
		// Overload Operators;
		const ScavTrap& operator= 	( const ScavTrap &obj );
		
		// Member Functions;
		void attack					( const std::string& target );
		void guardGate				( void );
};

#endif