/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 02:50:50 by tfiguero          #+#    #+#             */
/*   Updated: 2024/05/11 03:47:30 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "Bobi";
	_hp = 10;
	_ep = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
}
ClapTrap::~ClapTrap()
{}
void ClapTrap::attack(const std::string& target)
{
	if(this->_ep <= 0 || this->_hp <=0)
	{
		std::cout << this->_name <<" is unable to attack"<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is attacking " << target << " for " << this->_ad << " points of damage" << std::endl;
	this->_ep -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " of damage" << std::endl;
	this->_hp -= amount;
	if(this->_hp <= 0)
		std::cout << this->_name << " died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_ep <= 0 || this->_hp <=0)
	{
		std::cout << this->_name <<" is unable to be Repaired"<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has healed for " << amount << " of points" << std::endl;
	this->_hp += amount;
	this->_ep -= 1;
}
