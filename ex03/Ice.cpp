/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:19:59 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/19 13:21:57 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructor

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
	AMateria::type = "ice";
}

Ice::Ice(Ice const & src) : AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

// Destructor

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

// Operator

Ice & Ice::operator=(Ice const & src)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &src)
		AMateria::type = src.type;
	return (*this);
}

// Member functions

AMateria* Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}