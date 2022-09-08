/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:32:43 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 17:08:40 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain;
}

Dog &Dog::operator=(Dog const &d)
{
	if (this != &d)
	{
		_type = d._type;
		*_brain = *(d._brain); //dereference to make deep copy
	}
	return *this;
}

Dog::Dog(Dog const &d) : Animal(d)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*d._brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "meow" << std::endl;
}

void Dog::setIdea(int i, std::string s)
{
	(*_brain).setIdea(i, s);
}

std::string Dog::getIdea(int i) const
{
	return (*_brain).getIdea(i);
}