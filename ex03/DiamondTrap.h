/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 07:50:53 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/24 08:17:54 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	name;
	public:
		// Constructor( void | std::string ), copy construcor, destrucor;
		DiamondTrap						( void );
		DiamondTrap						( std::string );
		DiamondTrap						( const DiamondTrap& obj);
		~DiamondTrap					( void );
		
		// Overload Operators;
		const DiamondTrap& operator= 	( const DiamondTrap &obj );

		// Member functions;
		
};