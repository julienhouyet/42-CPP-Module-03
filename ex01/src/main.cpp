/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:40:46 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/08 05:17:08 by jhouyet          ###   ########.fr       */
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