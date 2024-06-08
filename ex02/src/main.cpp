/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:40:46 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/08 05:17:14 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main()
{
	FragTrap lucas("Lucas");
	FragTrap charlie("Charlie");

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
	
	charlie.beRepaired(lucas.getAttackDamage());

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

	lucas.highFivesGuys();

	std::cout << std::endl;
	
	charlie.highFivesGuys();

	std::cout << std::endl;
}