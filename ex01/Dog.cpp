/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:43:31 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 14:32:20 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*src.brain);
	type = src.type;
}

// Destructor

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog default destructor called" << std::endl;
}

// Operator

Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog assignemt operator called" << std::endl;
	if (this != &src)
	{
		if (brain)
			delete brain;
		brain = new Brain(*src.brain);
		type = src.type;
	}
	return (*this);
}

// Member functions

void Dog::makeSound() const
{
	std::cout << "WOOOOF WOOOOF!" << std::endl;
}

// Getters and setters

std::string Dog::getIdea(int index)
{
	return (brain->getIdea(index));
}

void Dog::setIdea(int index, std::string content)
{
	brain->setIdea(index, content);
}
