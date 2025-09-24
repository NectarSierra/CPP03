/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 07:50:53 by nsaillez          #+#    #+#             */
/*   Updated: 2025/09/24 10:13:44 by nsaillez         ###   ########.fr       */
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
		DiamondTrap						( std::string name );
		DiamondTrap						( const DiamondTrap& obj);
		~DiamondTrap					( void );
		
		// Overload Operators;
		const DiamondTrap& operator= 	( const DiamondTrap &obj );

		// Member functions;
		using	ScavTrap::attack;
		void	whoAmI					( void );
	
};