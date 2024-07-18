/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabejaou <sabejaou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:12:09 by sabejaou          #+#    #+#             */
/*   Updated: 2024/07/01 20:57:02 by sabejaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <sstream>
#include <string>

#include "user.class.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		Phonebook(const Phonebook &);
		Phonebook & operator=(const Phonebook &);
		void	add(void);
		void	search(void);
	private:
		size_t			maxusers;
		Contact			contact[8];
		size_t 			users_number;
		size_t			cursor;
};

#endif