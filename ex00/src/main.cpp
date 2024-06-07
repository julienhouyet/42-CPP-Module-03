/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:40:46 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 16:43:53 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap lucas("Lucas");
	ClapTrap victor("Victor");
	ClapTrap charlie("Charlie");

	lucas.attack("Charlie");
	lucas.attack("Charlie");
	lucas.attack("Charlie");
	lucas.attack("Charlie");
	lucas.attack("Charlie");
	lucas.attack("Charlie");
}