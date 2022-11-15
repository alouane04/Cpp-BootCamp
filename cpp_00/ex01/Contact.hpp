/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:35:46 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 09:35:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nikeName;
    std::string phoneNumber;
    std::string darkestSecret;
    int         index;

public:
    Contact();
    ~Contact();

    std::string Get_FirstName();
    std::string Get_LastName();
    std::string Get_NikeName();
    std::string Get_PhoneNumber();
    std::string Get_DarkestSecret();
	int	        Get_Index();

    void Set_FirstName(std::string str);
    void Set_LastName(std::string str);
	void Set_NikeName(std::string str);
	void Set_PhoneNumber(std::string str);
	void Set_DarkestSecret(std::string str);
	void Set_Index(int index);
};

#endif