/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:32:14 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/20 14:29:23 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "\033[1;31mTest create and fill an array of Animal objects\033[0m" << std::endl;
	const Animal *j[8];

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << "new dog, array position: " << i << std::endl;
			j[i] = new Dog();
		}
		else
		{
			std::cout << "new cat, array position: " << i << std::endl;
			j[i] = new Cat();
		}
	}
	
	std::cout << std::endl;
	std::cout << "\033[1;31mTest makeSound\033[0m" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cout << "make sound, array position: " << i << std::endl;
		j[i]->makeSound();
	}
	
	for (int i = 0; i < 8; i++)
	{
		std::cout << "delete animal, array position: " << i << std::endl;
		delete j[i];
	}
	
	std::cout << std::endl;

	std::cout << "\033[1;31mTest Idea\033[0m" << std::endl;
	
	Cat Cat;
	Dog Dog;

	Cat.setIdea(0, "I am a cat");
	Cat.setIdea(1, "I am a cat too");
	Cat.setIdea(2, "I am a cat too too");
	std::cout << Cat.getIdea(0) << std::endl;
	std::cout << Cat.getIdea(1) << std::endl;
	std::cout << Cat.getIdea(2) << std::endl;
	
	std::cout << std::endl;

	Dog.setIdea(0, "I am a dog");
	Dog.setIdea(1, "I am a dog too");
	Dog.setIdea(2, "I am a dog too too");

	std::cout << Dog.getIdea(0) << std::endl;
	std::cout << Dog.getIdea(1) << std::endl;
	std::cout << Dog.getIdea(2) << std::endl;

	return (0);
}