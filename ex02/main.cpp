/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:46:46 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 17:48:07 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Cat cat1;
	Dog dog1;
	Animal *cat2;
	Animal *dog2;
	try
	{
		cat2 = new Cat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	try
	{
		dog2 = new Dog;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete cat2;
		return 1;
	}
	
	delete cat2;
	delete dog2;
	
	// Animal animal; //impossible to instantiate Abstract Class



	return 0;
}