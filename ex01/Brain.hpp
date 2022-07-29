/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:50:18 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 19:20:18 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <cstdlib>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(Brain const &b);
	Brain & operator=(Brain const &b);
	~Brain();
	
	void setIdea(int i, std::string s);
	std::string getIdea(int i) const;
};


#endif