/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:46:46 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/30 12:25:21 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define TAB_SIZE 10

int main(void)
{
	//subject tests
	std::cout << "subject tests :" << std::endl;
	const Animal* j;
	const Animal* i;
	try
	{
		j = new Dog();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	try
	{
		i = new Cat();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete j;
		return 1;
	}
	delete j;//should not create a leak
	delete i;


	//array tests
	std::cout << std::endl << "array tests :" << std::endl;
	Animal *tab[TAB_SIZE];
	int k;
	try
	{
		for (k = 0; k < TAB_SIZE; k++)
		{
			if (k % 2 == 0)
				tab[k] = new Cat();
			else
				tab[k] = new Dog();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		for (int j = 0; j < k; j++)
			delete tab[j];
		return 1;
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

	Cat cat3;
	cat3.setIdea(0, "cat3 idea still here");
	{ //new scope
		Cat cat4 = cat3;
		Cat cat5(cat3);
	} //end of scope
	std::cout << "cat3 first idea value : " << cat3.getIdea(0) << std::endl;

	return 0;
}