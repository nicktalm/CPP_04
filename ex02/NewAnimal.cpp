/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewAnimal.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:23:53 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 17:00:01 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewAnimal.hpp"

// Constructor

NewAnimal::NewAnimal()
{
	std::cout << "NewAnimal default constructor called" << std::endl;
	type = "NewAnimal";
}

NewAnimal::NewAnimal(std::string srctype)
{
	std::cout << "NewAnimal constructor with type called" << std::endl;
	type = srctype;
}

NewAnimal::NewAnimal(NewAnimal const & src)
{
	std::cout << "NewAnimal copy constructor called" << std::endl;
	*this = src;
}

// Destructor

NewAnimal::~NewAnimal()
{
	std::cout << "NewAnimal destructor called" << std::endl;
}

// Operator

NewAnimal & NewAnimal::operator=(NewAnimal const & src)
{
	std::cout << "NewAnimal assignation operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return (*this);
}

// Member functions

void NewAnimal::makeSound() const
{
}

std::string NewAnimal::getType() const
{
	return (type);
}