/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:03:15 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 14:18:09 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat();
	Bureaucrat(std::string Name, int grade);
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& other);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw() { return "Grade is too high";}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw() { return "Grade is too low";}
	};

	const std::string	getName() const;
	int					getGrade() const;
	void				incrementGrade();
	void				decrementGrade();

	void				signForm(Form& form);
	
	void				executeForm(const Form& form) const;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& other);

#endif