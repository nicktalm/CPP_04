/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewAnimal.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:23:51 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 16:54:36 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWANIMAL_HPP
# define NEWANIMAL_HPP

# include <iostream>

class NewAnimal
{
	protected:
		std::string type;
	public:
		NewAnimal();
		NewAnimal(std::string type);
		NewAnimal(NewAnimal const & src);

		NewAnimal & operator=(NewAnimal const & src);

		virtual ~NewAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif