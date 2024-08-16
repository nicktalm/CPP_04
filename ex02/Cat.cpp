/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:29:12 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 17:05:38 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(Cat const & src) : NewAnimal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*src.brain);
	type = src.type;
}

// Destructor

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat default destructor called" << std::endl;
}

// Operator

Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Cat assignemt operator called" << std::endl;
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

void Cat::makeSound() const
{
	std::cout << "MIAAAUU MIAAAUU!" << std::endl;
}

// Getters and setters

std::string Cat::getIdea(int index)
{
	return (brain->getIdea(index));
}

void Cat::setIdea(int index, std::string content)
{
	brain->setIdea(index, content);
}
