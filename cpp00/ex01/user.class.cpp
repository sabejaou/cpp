/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabejaou <sabejaou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:20:46 by sabejaou          #+#    #+#             */
/*   Updated: 2024/07/01 22:45:49 by sabejaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "user.class.hpp"

Contact::Contact(void)
{
    Contact::used = 0;
    return ;
}

Contact::~Contact(void)
{
    return ;
}

Contact::Contact(const Contact &cpy)
{
    (void)cpy;
    return ;
}

Contact & Contact::operator=(const Contact &inst)
{
    (void)inst;
    Contact *a = NULL;
    return (*a);
}

void Contact::writeme()
{   
    std::cout << "What is my first name ?" << std::endl;
    std::cin >> Contact::first_name;
    
    std::cout << "What is my last name ?" << std::endl;
    std::cin >> Contact::last_name;

    std::cout << "What is my nickname ?" << std::endl;
    std::cin >> Contact::nickname;

    std::cout << "What is my phone number ?" << std::endl;
    std::cin >> Contact::phone_number;
    
    std::cout << "What is my darkest secret ?" << std::endl;
    std::cin >> Contact::darkest_secret;

    Contact::used = 1;
    std::cout << std::endl << "Contact Saved !" << std::endl;
}

bool Contact::isused()
{   
    if (Contact::used)
        return (1);
    return (0);
}

static size_t ft_strlen(std::string str)
{
    size_t i = 0;

    while (str[i])
        i++;
    return (i);   
}

static void displayline(std::string str)
{
    size_t len = 0;
    
    len = ft_strlen(str);
    if (len > 10)
    {
        for (size_t i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".";
    }
    else
    {
        for (size_t i = 0; i < 10 - len; i++)
            std::cout << " ";
        std::cout << str;
    }
    std::cout << "|";
}

void Contact::contactline()
{
    std::cout << "|";
    displayline(Contact::first_name);
    displayline(Contact::last_name);
    displayline(Contact::nickname);
    displayline(Contact::phone_number);
    std::cout << std::endl;
}

void Contact::displayme()
{
    std::cout << "First Name : " << Contact::first_name << std::endl;
    std::cout << "Last Name : " << Contact::last_name << std::endl;
    std::cout << "Nickname : " << Contact::nickname << std::endl;
    std::cout << "Phone Number :" << Contact::phone_number << std::endl;
    std::cout << "Darkest Secret : " << Contact::darkest_secret << std::endl;
}