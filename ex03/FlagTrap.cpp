/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:27:19 by tfiguero          #+#    #+#             */
/*   Updated: 2024/05/12 19:43:39 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "FlagTrap constructor default called" << std::endl;
}
FlagTrap::FlagTrap(std::string name)
{
	std::cout << "FlagTrap constructor with name called, name of the trap will be: "<< name << std::endl;
	_name = name;
}
FlagTrap::~FlagTrap()
{
	std::cout << "Default destructor for FlagTrap " << _name <<" called" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	std::string in;
	std::cout << "Hey! Would you like to high five? Please Please Pleaseeeeeeeeee🥺" << std::endl;
	while(1)
	{
		if(!std::getline(std::cin, in)){
			std::cout << "Wy are u so rude doing the eof 😤" << std::endl;
			break ; 
		}
		for(size_t i = 0; i < in.length(); i++)
			in[i] = tolower(in[i]);
		if(in == "yes")
		{
			std::cout << "Yaaaaay 👏" << std::endl; 
			break ;
		}else if (in == "no"){
			std::cout << "Oh... okay 😟" << std::endl;
			break ;
		}else{
			std::cout << "Come on say yes or no 😡" << std::endl;
		}
	}
	if(in.empty())
		return ;
}
