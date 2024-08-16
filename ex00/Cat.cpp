/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:29:12 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 10:30:31 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	Animal::type = "Cat";
	type = "Default";
}

Cat::Cat(std::string srctype)
{
	std::cout << "Cat constructor with type called" << std::endl;
	Animal::type = "Cat";
	type = srctype;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

// Destructor

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

// Operator

Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Cat assignemt operator called" << std::endl;
	if (this != &src)
	{
		Animal::type = src.Animal::type;
		type = src.type;
	}
	return (*this);
}

// Member functions

void Cat::makeSound() const
{
	std::cout << "MIAAAUU MIAAAUU!" << std::endl;
}
