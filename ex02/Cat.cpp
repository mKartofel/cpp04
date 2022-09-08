/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:27:46 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 17:26:49 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	_brain = new Brain;
}

Cat &Cat::operator=(Cat const &c)
{
	if (this != &c)
	{
		_type = c._type;
		*_brain = *(c._brain); //dereference to make deep copy
	}
	return *this;
}

Cat::Cat(Cat const &c) : Animal(c)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*c._brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

void Cat::setIdea(int i, std::string s)
{
	(*_brain).setIdea(i, s);
}

std::string Cat::getIdea(int i) const
{
	return (*_brain).getIdea(i);
}