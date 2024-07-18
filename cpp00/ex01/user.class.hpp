/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabejaou <sabejaou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:51:27 by sabejaou          #+#    #+#             */
/*   Updated: 2024/07/01 21:34:24 by sabejaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_CLASS_HPP
# define USER_CLASS_HPP

#include <iostream>
#include <sstream>
#include <string>



class Contact {
	private:
        bool           used;
        std::string    last_name;
        std::string    phone_number;
        std::string    darkest_secret;
        std::string    nickname;
		std::string    first_name;
	public:
		Contact();
		~Contact();
		Contact(const Contact &);
		Contact & operator=(const Contact &);
        void    writeme(void);
        bool    isused(void);
        void    displayme(void);
        void    contactline(void);
        
};


#endif