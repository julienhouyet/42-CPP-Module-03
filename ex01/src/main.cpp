/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: lucas.getAttackDamage()24/06/07 13:40:46 by jhouyet           #+#    #+#             */
/*   Updated: lucas.getAttackDamage()24/06/07 18:16:29 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap lucas("Lucas");
	ScavTrap charlie("Charlie");

	std::cout << std::endl;

	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;

	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;

	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;

	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;

	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;
	
	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;
	
	charlie.beRepaired(200);

	std::cout << std::endl;
	
	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;
	
	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;
	
	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;
	
	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;
	
	lucas.attack(charlie.getName());
	charlie.takeDamage(lucas.getAttackDamage());

	std::cout << std::endl;

	lucas.guardGate();

	std::cout << std::endl;
	
	charlie.guardGate();

	std::cout << std::endl;
}