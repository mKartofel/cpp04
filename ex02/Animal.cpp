/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:57:24 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 17:25:50 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal string constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &a)
{
	if (this != &a)
		_type = a._type;
	return *this;
}

Animal::Animal(Animal const &a)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = a;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}