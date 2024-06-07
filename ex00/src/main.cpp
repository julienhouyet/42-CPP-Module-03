/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:40:46 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 18:16:40 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap lucas("Lucas");
	ClapTrap charlie("Charlie");

	std::cout << std::endl;

	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;

	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;

	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;

	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;

	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;
	
	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;
	
	charlie.beRepaired(200);

	std::cout << std::endl;
	
	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;
	
	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;
	
	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;
	
	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;
	
	lucas.attack("Charlie");
	charlie.takeDamage(20);

	std::cout << std::endl;
}