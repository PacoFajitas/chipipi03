/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:24:59 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/05 19:21:51 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		FlagTrap(FlagTrap& old);
		FlagTrap& operator=(FlagTrap& old);
		~FlagTrap();
		void	highFivesGuys(void);
			
};
#endif