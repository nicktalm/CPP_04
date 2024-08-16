/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:43:39 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 16:57:11 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "NewAnimal.hpp"
# include "Brain.hpp"

class Dog : public NewAnimal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const & src);
		Dog & operator=(Dog const & src);
		virtual ~Dog();

		void makeSound() const;

		std::string getIdea(int index);
		void setIdea(int index, std::string content);
};

#endif