/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:43:31 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 10:52:59 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	type = src.type;
}

// Destructor

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

// Operator

Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog assignemt operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return (*this);
}

// Member functions

void Dog::makeSound() const
{
	std::cout << "WOOOOF WOOOOF!" << std::endl;
}
