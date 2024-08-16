/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:29:22 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 12:28:08 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const & src);
		Cat & operator=(Cat const & src);
		virtual ~Cat();

		void makeSound() const;

		std::string getidea(int index);
		void setidea(int index, std::string content);
};

#endif