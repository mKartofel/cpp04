/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:46:46 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/30 10:35:38 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Cat cat1();
	Dog dog1();
	Animal *cat2 = new Cat;
	Animal *dog2 = new Dog;
	(void)cat2;
	(void)dog2;
	// Animal animal; //impossible to instantiate Abstract Class

	delete cat2;
	delete dog2;

	return 0;
}