/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:47:26 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/19 14:34:17 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CPP
# define AMATERIA_CPP

# include <iostream>

# include "ICharacter.hpp"

class ICharacter;

class	AMateria
{
		protected:
			std::string type;
		public:
			AMateria();
			AMateria(std::string const & type);
			AMateria(AMateria const & src);

			AMateria & operator=(AMateria const & src);

			virtual ~AMateria();

			std::string const & getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter &target);
};

#endif