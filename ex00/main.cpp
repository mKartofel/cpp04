/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:35:11 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 17:01:40 by vfiszbin         ###   ########.fr       */
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
	const WrongAnimal* wrongCat1 = new WrongCat();
	const WrongCat* wrongCat2 = new WrongCat();
	std::cout << wrongCat1->getType() << " " << std::endl; 
	std::cout << wrongCat2->getType() << " " << std::endl; 
	wrongCat1->makeSound(); //will output the WrongAnimal sound! 
	wrongCat2->makeSound(); //will output the WrongCat sound! 
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat1;
	delete wrongCat2;
}