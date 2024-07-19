/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabejaou <sabejaou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:12:18 by sabejaou          #+#    #+#             */
/*   Updated: 2024/07/19 02:42:39 by sabejaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook(void)
{  
    Phonebook::users_number = 0;
    Phonebook::maxusers = 8;
    Phonebook::cursor = 0;
}

Phonebook::~Phonebook(void){
    return ;
}

Phonebook::Phonebook(const Phonebook &cpy)
{
    for (size_t i = 0; i < cpy.maxusers; i++)
        Phonebook::contact[i] = cpy.contact[i];
    Phonebook::users_number = cpy.users_number;
}

Phonebook & Phonebook::operator=(const Phonebook &inst)
{
    Phonebook   *tmp = NULL;
    for (size_t i = 0; i < inst.maxusers; i++)
        tmp->contact[i] = inst.contact[i];
    tmp->users_number = inst.users_number;
    return (*tmp);
}

void    Phonebook::add(void)
{
    Contact *tmp = &(Phonebook::contact[cursor]);

    tmp->writeme();
    if (cursor < 7)
        Phonebook::cursor += 1;
    else
        Phonebook::cursor = 0;
}


void	Phonebook::search(void)
{
    Contact *tmp = Phonebook::contact;
    std::string buff;

    size_t i = 0;
    std::cout << "_________________________________________________" << std::endl;
    std::cout << "|idx| fst name | lst name | nickname | call nbr |" << std::endl;
    std::cout << "_________________________________________________" << std::endl;
    while (i <= 7)
    {
        if (!tmp[i].isused())
            break;
        std::cout << "|  " << i;
        tmp[i].contactline();
        i++;
    }
    std::cout << "Enter index" << std::endl;
    std::cin >> buff;
    if (buff[0] && !buff[1] && isalnum(buff[0]) && tmp[atoi(&buff[0])].isused())
        tmp[atoi(&buff[0])].displayme();
    else
        std::cout << "Invalid Index" << std::endl;
    std::cout << "EXITING SEARCH MODE" << std::endl;
}