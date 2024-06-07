/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:40:40 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 18:14:22 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("JohnDoe"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) 
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& copy )
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &copy) {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

unsigned int ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

void ClapTrap::attack( const std::string& target )
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		if (this->_hitPoints <= 0)
		{
			std::cout << this->_name << " no longer has a life. He can't attack." << std::endl;
		}
		else if (this->_energyPoints <= 0)
		{
			std::cout << this->_name << " doesn't have enough energy to attack." << std::endl;
		}
		
	}
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints > 0)
	{
		if (amount > this->_hitPoints)
		{
			this->_hitPoints = 0;
		}
		else
		{
			this->_hitPoints -=amount;
		}
		std::cout << this->_name << " take " << amount << " points of damage, " << this->_hitPoints << " hit points remaining." << std::endl;
	}
	else
	{
		std::cout << this->_name << " can't take " << amount << " damage points, he's already dead!" << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << this->_name << " heals himself and recovers " << amount << " hits points." << std::endl;
	}
	else
	{
		std::cout << this->_name << " can't heal himself, he has no more energy points." << std::endl;
	}
}