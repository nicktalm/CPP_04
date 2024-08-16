/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:23:53 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/14 15:53:21 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	type = "Animal";
}

Animal::Animal(std::string srctype)
{
	std::cout << "Animal constructor with type called" << std::endl;
	type = srctype;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

// Destructor

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

// Operator

Animal & Animal::operator=(Animal const & src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return (*this);
}

// Member functions

void Animal::makeSound() const
{
	std::cout << "Animal default sound" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}