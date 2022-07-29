/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:27:46 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 16:34:15 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &c)
{
	_type = c._type;
	return *this;
}

Cat::Cat(Cat const &c) : Animal(c)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = c;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}