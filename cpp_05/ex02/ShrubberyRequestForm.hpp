/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyRequestForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:50:20 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 00:04:22 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYREQUESTFORM_HPP
#define SHRUBBERYREQUESTFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyRequestForm : public Form
{
private:
	const std::string	target;
public:
	ShrubberyRequestForm();
	ShrubberyRequestForm(const std::string& Target);
	ShrubberyRequestForm(const ShrubberyRequestForm& other);
	~ShrubberyRequestForm();

	ShrubberyRequestForm&	operator=(const ShrubberyRequestForm& other);

	void	execute(const Bureaucrat& executer) const;
};

#endif