/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:32:14 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/20 13:05:32 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal Nick;
	Cat Tom;
	Dog Spike;
	WrongAnimal WrongAnimal;
	WrongCat WrongCat;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Nick: " << Nick.getType() << std::endl;
	std::cout << "Tom: " << Tom.getType() << std::endl;
	std::cout << "Spike: " << Spike.getType() << std::endl;
	std::cout << "WrongAnimal: " << WrongAnimal.getType() << std::endl;
	std::cout << "WrongCat: " << WrongCat.getType() << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	Nick.makeSound();
	Tom.makeSound();
	Spike.makeSound();
	WrongAnimal.makeSound();
	WrongCat.makeSound();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	return (0);
}