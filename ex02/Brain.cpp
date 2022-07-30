/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:51:05 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 19:21:21 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string genRandomString(int const len) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    std::string randomString;

    for (int i = 0; i < len; ++i) {
        randomString += charset[std::rand() % sizeof(charset)];
    }
    return randomString;
}

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = genRandomString(10);
}

Brain & Brain::operator=(Brain const &b)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = b._ideas[i];
	return *this;
}

Brain::Brain(Brain const &b)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = b._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int i, std::string s)
{
	_ideas[i] = s;
}

std::string Brain::getIdea(int i) const
{
	return _ideas[i];
}


