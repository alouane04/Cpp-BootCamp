/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:30:59 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 09:30:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::Get_FirstName()
{
	return (this->firstName);
}

std::string Contact::Get_LastName()
{
	return (this->lastName);
}

std::string Contact::Get_NikeName()
{
	return (this->nikeName);
}

std::string Contact::Get_PhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::Get_DarkestSecret()
{
	return (this->darkestSecret);
}

int Contact::Get_Index()
{
	return (this->index);
}

void Contact::Set_FirstName(std::string str)
{
	this->firstName = str;
}

void Contact::Set_LastName(std::string str)
{
	this->lastName = str;
}

void Contact::Set_NikeName(std::string str)
{
	this->nikeName = str;
}

void Contact::Set_PhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

void Contact::Set_DarkestSecret(std::string str)
{
	this->darkestSecret = str;
}

void Contact::Set_Index(int index)
{
	this->index = index;
}
