/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:43:32 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 16:44:08 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal string constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &a)
{
	_type = a._type;
	return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = a;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal noise" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}