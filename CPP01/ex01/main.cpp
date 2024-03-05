/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdenisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:22:39 by vdenisse          #+#    #+#             */
/*   Updated: 2024/03/04 11:34:23 by vdenisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "../../colors.h"

int	main(void)
{
	print_test("Creating Zombie foo");
	Zombie *zombie = newZombie("foo");

	print_test("Announcing zombie foo");
	zombie->announce();

	print_test("Random chump");
	randomChump();

	print_test("Deleting zombie foo");
	delete zombie;


	print_test("Creating Zombie horde with name Brain Gobbler");
	int i = 5;
	Zombie *horde = zombieHorde(i, "Brain Gobbler");

	print_test("Announcing entire zombie horde");
	for(int j = 0; j < i; j++)
		horde[j].announce();

	print_test("Deleting entire horde");
	delete[] horde;
}

