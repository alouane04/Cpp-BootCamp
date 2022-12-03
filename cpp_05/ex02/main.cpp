/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:17:29 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 15:56:58 by ariahi           ###   ########.fr       */
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
		Bureaucrat				bureaucrat("alouane04", 4);
		ShrubberyCreationForm	test1("Shrubbery");
		RobotomyRequestForm		test2("Robotomy");
		PresidentialPardonForm	test3("President");
		// Form		form("another_alouane04", 4);
		
		bureaucrat.signForm(test1);
		bureaucrat.executeForm(test1);

		bureaucrat.signForm(test2);
		bureaucrat.executeForm(test2);
		bureaucrat.executeForm(test2);
		bureaucrat.executeForm(test2);
		bureaucrat.executeForm(test2);
		bureaucrat.executeForm(test2);
		

		bureaucrat.signForm(test3);
		bureaucrat.executeForm(test3);

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
