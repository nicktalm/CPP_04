/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:29:22 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 10:29:44 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string type;
	public:
		Cat();
		Cat(std::string srctype);
		Cat(Cat const & src);
		Cat & operator=(Cat const & src);
		virtual ~Cat();

		void makeSound() const;
};

#endif