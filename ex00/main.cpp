/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 02:51:04 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/05 19:15:01 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void)
{
	std::string nombre1 = "Paco";
	std::string nombre2 = "";
	ClapTrap a;
	std::cout << "holi" << std::endl;
	ClapTrap b(nombre1);
	std::cout << "adios" << std::endl;
	ClapTrap c = a;
	// std::cout << "qeu tal" << std::endl;
	// ClapTrap d(b);

	a.attack(nombre1);
	// b.takeDamage(10);
	// b.beRepaired(1);
	
}