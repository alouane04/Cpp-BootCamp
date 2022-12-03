 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:47:49 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 18:23:13 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& Target) : Form("RobotomyRequestForm", 72, 45), target(Target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :  Form(other), target(other.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& 	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	(void)other;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executer) const
{
	if (executer.getGrade() > this->getExeGrade())
		throw Form::GradeTooLowException();
	else
	{
		static int n;
		if (n++ % 2 == 0)
			std::cout << "ta9ta9ta9 " << this->target << " is ready for robot war" << std::endl;
		else
			std::cout << "ta9ta9ta9 *&@*&(! " << this->target << " is not ready for the war" << std::endl;
	}
}
