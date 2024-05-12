/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 02:51:04 by tfiguero          #+#    #+#             */
/*   Updated: 2024/05/12 20:26:01 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void)
{
	std::string nombre1 = "Paco";
	std::string nombre2 = "";
	ClapTrap a;
	ClapTrap b(nombre1);
	ClapTrap c = a;
	ClapTrap d(b);

	a.attack(nombre1);
	b.takeDamage(10);
	b.beRepaired(1);
	
}