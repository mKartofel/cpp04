/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:32:43 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 17:09:35 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &d)
{
	if (this != &d)
		_type = d._type;
	return *this;
}

Dog::Dog(Dog const &d) : Animal(d)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = d;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "ouaf" << std::endl;
}