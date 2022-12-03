/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:17:29 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 23:07:49 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Bureaucrat				bureaucrat("alouane04", 137);
		ShrubberyCreationForm	shrubbery("Shrubbery");
		RobotomyRequestForm		robotomy("Robotomy");
		PresidentialPardonForm	president("President");
		//Form		form("another_alouane04", 4);
		std::cout << "---------------" << std::endl;
		
		bureaucrat.signForm(shrubbery);
		bureaucrat.executeForm(shrubbery);
		
		std::cout << "---------------" << std::endl;
		
		bureaucrat.signForm(robotomy);
		bureaucrat.executeForm(robotomy);
		bureaucrat.executeForm(robotomy);
		bureaucrat.executeForm(robotomy);
		bureaucrat.executeForm(robotomy);
		bureaucrat.executeForm(robotomy);
		
		std::cout << "---------------" << std::endl;

		bureaucrat.signForm(president);
		bureaucrat.executeForm(president);

		// std::cout << form << std::endl;
		// bureaucrat.decrementGrade();
		// std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
