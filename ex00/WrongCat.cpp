/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:45:17 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 17:10:12 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &c)
{
	if (this != &c)
		_type = c._type;
	return *this;
}

WrongCat::WrongCat(WrongCat const &c) : WrongAnimal(c)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = c;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "wrong meow" << std::endl;
}