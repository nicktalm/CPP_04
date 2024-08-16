/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:43:39 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 10:52:32 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const & src);
		Dog & operator=(Dog const & src);
		virtual ~Dog();

		void makeSound() const;
};

#endif