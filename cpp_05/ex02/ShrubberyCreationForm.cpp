/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:52:25 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/03 15:54:23 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubberyform", 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& Target) : Form("shrubberyform", 145, 137), target(Target)
{	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	(void)other;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executer) const
{
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	else if (executer.getGrade() > this->getExeGrade())
		throw Form::GradeTooLowException();

	std::ofstream outfile(this->getName() + "_shrubbery");

	outfile << "          .     .  .      +     .      .          ." << std::endl;
		outfile << "     .       .      .     #       .           ." << std::endl;
		outfile << "        .      .         ###            .      .      ." << std::endl;
		outfile << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std ::endl;
		outfile << "          .      . \"####\"###\"####\"  ." << std::endl;
		outfile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
		outfile << "  .             \"#########\"#########\"        .        ." << std::endl;
		outfile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
		outfile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std:: endl;
		outfile << "                .\"##\"#####\"#####\"##\"           .      ." << std:: endl;
		outfile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
		outfile << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
		outfile << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
		outfile << "            .     \"      000      \"    .     ." << std::endl;
		outfile << "       .         .   .   000     .        .       ." << std::endl;
		outfile << ".. .. ..................O000O........................ ......" << std::endl;

	outfile.close();
}
