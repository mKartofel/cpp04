/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:46:46 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 19:25:38 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define TAB_SIZE 10

int main(void)
{
	//subject tests
	std::cout << "subject tests :" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;


	//array tests
	std::cout << std::endl << "array tests :" << std::endl;
	Animal *tab[TAB_SIZE];
	for (int i = 0; i < TAB_SIZE; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}

	for (int i = 0; i < TAB_SIZE; i++)
		delete tab[i];

	//deepcopy tests
	std::cout << std::endl << "deepcopy test :" << std::endl;
	Dog dog1;
	Cat cat1;
	Dog dog2;
	Cat cat2(cat1);
	dog2 = dog1;

	dog1.setIdea(0, "this is a dog1 idea");
	dog2.setIdea(0, "whereas this is a dog2 idea");
	cat1.setIdea(0, "this is a cat1 idea");
	cat2.setIdea(0, "whereas this is a cat2 idea");
	
	std::cout << "dog1 first idea value : " << dog1.getIdea(0) << std::endl;
	std::cout << "dog2 first idea value : " << dog2.getIdea(0) << std::endl;

	std::cout << "cat1 first idea value : " << cat1.getIdea(0) << std::endl;
	std::cout << "cat2 first idea value : " << cat2.getIdea(0) << std::endl;

	return 0;
}