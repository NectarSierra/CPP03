/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:17:38 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/23 10:53:35 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	public:
		// Constructor( void | std::string ), copy constructor, destructor;
		ScavTrap					( void );
		ScavTrap					( std::string name );
		ScavTrap					( const ScavTrap &obj );
		~ScavTrap					( void );
		
		// Overload Operators;
		const ScavTrap& operator= 	( const ScavTrap &obj );
		
		// Member Functions;
		void attack					( const std::string& target );
		void guardGate				( void );
};