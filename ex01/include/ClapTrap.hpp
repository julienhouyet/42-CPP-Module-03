/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:40:34 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 17:59:34 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& copy );
		ClapTrap& operator=( const ClapTrap& copy );
		~ClapTrap( void );

		void setName(std::string name);
		void setHitPoints(unsigned int hitPoints);
		void setEnergyPoints(int energyPoints);
		void setAttackDamage(int attackDamage);

		std::string getName() const;
		unsigned int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	private:
		std::string _name;
		unsigned int _hitPoints;
		int _energyPoints;
		int _attackDamage;
};

#endif