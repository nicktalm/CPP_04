/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:47:31 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 17:55:26 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructor

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
	type = "AMateria";
}

AMateria::AMateria(std::string const & srctype)
{
	std::cout << "AMateria constructor with type called" << std::endl;
	type = srctype;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

// Destructor

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

// Operator

AMateria & AMateria::operator=(AMateria const & src)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return (*this);
}

// Member functions

std::string const & AMateria::getType() const
{
	return (type);
}

// void AMateria::use(ICharacter& target)
// {
// 	(void)target;
// 	std::cout << "AMateria use" << std::endl;
// }
