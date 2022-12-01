/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.CPP                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:05:03 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/01 23:18:19 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name), grade(Grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	grade -= 1;
	if (grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	grade += 1;
	if (grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& other)
{
	out << other.getName() << ", Bureaucrat grade " << other.getGrade();
	return (out);
}
