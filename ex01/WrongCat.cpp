/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:11:45 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 11:20:19 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Constructor

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

//Destructor

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

//Operator

WrongCat & WrongCat::operator=(WrongCat const & src)
{
	std::cout << "WrongCat assignemt operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

//Member function

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}
