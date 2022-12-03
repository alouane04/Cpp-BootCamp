/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:33:51 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 21:53:49 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& other);
	~Intern();

	Intern&	operator=(const Intern& other);

	Form*	makeForm(std::string name, std::string target);
};

#endif