/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 07:37:11 by marvin            #+#    #+#             */
/*   Updated: 2022/09/24 07:37:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contact[8];
	int		index;
public:
	PhoneBook(void);
	~PhoneBook(void);
	void		ADD(void);
	void		SEARCH(void);
};

#endif