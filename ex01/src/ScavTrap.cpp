/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:26:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 18:12:53 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	setName("JohnDoe");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Constructor called" << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap( const ScavTrap& copy ) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& copy )
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy) {
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
    }
    return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}