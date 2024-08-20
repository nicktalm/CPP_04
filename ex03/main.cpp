/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:46:55 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/20 15:17:37 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter	*me = new Character("me");

	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter	*bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete me;
	delete bob;
	delete src;
	return (0);
}

// int main(void)
// {
// 	IMateriaSource* src = new MateriaSource();
// 	AMateria*		trash[4];
// 	int				i = 0;
// 	std::cout << std::endl;

// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	trash[i++] = tmp;
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	trash[i++] = tmp;
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->unequip(1);
// 	me->unequip(0);
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	std::cout << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;
// 	for (int x = 0; x < i; x++)
// 		delete trash[x];
// 	return (0);
// }