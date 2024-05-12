/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 02:51:04 by tfiguero          #+#    #+#             */
/*   Updated: 2024/05/12 18:01:32 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main (void)
{
	// std::string nombre1 = "Paco";
	// std::string nombre2 = "";
	ClapTrap a;
	ScavTrap b;
	// ClapTrap c(nombre2);

	a.attack("nombre1");
	b.takeDamage(20);
	b.attack("Bobi");
	a.takeDamage(20);
	b.beRepaired(1);
	b.guardGate();
}