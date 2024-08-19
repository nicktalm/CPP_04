/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:12:32 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/19 13:16:25 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructor

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
	AMateria::type = "cure";
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

// Destructor

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

// Operator

Cure & Cure::operator=(Cure const & src)
{
	std::cout << "Cure assignation operator called" << std::endl;
	if (this != &src)
		AMateria::type = src.type;
	return (*this);
}

// Member functions

AMateria* Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}