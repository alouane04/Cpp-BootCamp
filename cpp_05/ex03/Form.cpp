/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:31:36 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/02 21:37:51 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : sign_grade(0), exe_grade(0)
{
}

Form::Form(const std::string& Name, int Sign_grade) : name(Name), sign_grade(Sign_grade), exe_grade(0)
{
	if (sign_grade < 1)
		throw Form::GradeTooHighException();
	if (sign_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const std::string& Name, int Sign_grade, int Exe_grade) : name(Name), sign_grade(Sign_grade), exe_grade(Exe_grade)
{
	if (Sign_grade < 1 || Exe_grade < 1)
		throw Form::GradeTooHighException();
	if (Sign_grade > 150 || Exe_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other) : name(other.getName()), sign_grade(getGrade()), exe_grade(getExeGrade())
{
}

Form::~Form()
{
}

Form&	Form::operator=(const Form& other)
{
	if (this != &other)
		this->_signed = other.getSigned();
	return (*this);
}

const std::string	Form::getName() const
{
	return (this->name);
}

int					Form::getGrade() const
{
	return (this->sign_grade);
}

int					Form::getExeGrade() const
{
	return (this->exe_grade);
}

bool				Form::getSigned() const
{
	return (this->_signed);
}

void				Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > sign_grade)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream&		operator<<(std::ostream& out, const Form& other)
{
	out << "Form name: " << other.getName() << std::endl
		<< "Grade to sign: " << other.getGrade() << std::endl
		<< "Grade to execute: " << other.getExeGrade() << std::endl;
	return (out);
}
