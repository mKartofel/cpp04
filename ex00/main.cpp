/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:35:11 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 16:53:06 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal* wrongMeta = new WrongAnimal(); 
	const WrongAnimal* wrongI = new WrongCat();
	std::cout << wrongI->getType() << " " << std::endl; 
	wrongI->makeSound(); //will output the WrongAnimal sound! 
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongI;
}