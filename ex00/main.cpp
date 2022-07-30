/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:35:11 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/30 11:59:55 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new (std::nothrow) Animal(); 
	if (meta == NULL)
		return 1;
	const Animal* j = new (std::nothrow) Dog();
	if (j == NULL)
	{
		delete meta;
		return 1;
	}
	const Animal* i = new (std::nothrow) Cat();
	if (i == NULL)
	{
		delete meta;
		delete j;
		return 1;
	}
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal* wrongMeta = new (std::nothrow) WrongAnimal();
	if (wrongMeta == NULL)
		return 1;
	const WrongAnimal* wrongCat1 = new (std::nothrow) WrongCat();
	if (wrongCat1 == NULL)
	{
		delete wrongMeta;
		return 1;
	}
	const WrongCat* wrongCat2 = new (std::nothrow) WrongCat();
	if (wrongCat2 == NULL)
	{
		delete wrongMeta;
		delete wrongCat1;
		return 1;
	}
	std::cout << wrongCat1->getType() << " " << std::endl; 
	std::cout << wrongCat2->getType() << " " << std::endl; 
	wrongCat1->makeSound(); //will output the WrongAnimal sound! 
	wrongCat2->makeSound(); //will output the WrongCat sound! 
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat1;
	delete wrongCat2;
}