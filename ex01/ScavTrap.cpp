/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:09:40 by tfiguero          #+#    #+#             */
/*   Updated: 2024/05/12 18:00:45 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called with name: " << name << std::endl;
	_name = name;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called"<< std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->_ep <= 0 || this->_hp <=0)
	{
		std::cout << this->_name <<" is unable to attack"<< std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is attacking " << target << " for " << this->_ad << " points of damage" << std::endl;
	this->_ep -= 1;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now on Gate keeper mode" << std::endl;
}