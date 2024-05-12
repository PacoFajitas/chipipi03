/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 02:51:04 by tfiguero          #+#    #+#             */
/*   Updated: 2024/05/11 03:50:58 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void)
{
	std::string nombre1 = "Paco";
	ClapTrap a;
	ClapTrap b(nombre1);

	a.attack(nombre1);
	b.takeDamage(10);
	b.beRepaired(1);
	
}