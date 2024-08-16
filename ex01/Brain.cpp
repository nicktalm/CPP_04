/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:17:44 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 12:24:12 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = src.getIdea(i);
}

// Destructor

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

// Operator

Brain & Brain::operator=(Brain const & src)
{
	std::cout << "Brain assignemt operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = src.getIdea(i);
	}
	return (*this);
}

// Getters and setters

std::string Brain::getIdea(int index) const
{
	return (ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
	ideas[index] = idea;
}