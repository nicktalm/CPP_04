/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:17:29 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/16 12:20:03 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const & src);
		Brain & operator=(Brain const & src);
		virtual ~Brain();

		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};

#endif