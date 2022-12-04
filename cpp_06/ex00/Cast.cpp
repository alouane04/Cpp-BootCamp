/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:17 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/04 19:46:33 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast()
{
	this->n = 0;
	this->c = 0;
	this->f = 0.0f;
	this->d = 0.0;
	this->s = "";
}

Cast::Cast(const Cast& other)
{
	*this = other;
}

Cast::~Cast()
{
}

Cast&	Cast::operator=(const Cast& other)
{
	this->n = other.n;
	this->f = other.f;
	this->d = other.d;
	this->s = other.s;
	
	return (*this);
}

bool	Cast::isChar() const
{
	if (s.length() == 1 && std::isalpha(s[0]) && std::isprint(s[0]))
		return (true);
	return (false);
}

bool	Cast::isInt() const
{
	for (int i = 0; i < s.length(); i++)
	{
		if (i == 0 && (s[i] == '-' || s[i] == '+'))
			continue;
		else if (std::isdigit(s[i]))
			continue;
		else
			return (false);
	}
	return (true);
}

bool	Cast::isFloat() const
{
	int n = 0;
	int f = 0;

	if (s.find('.') == std::string::npos || s.back() != 'f' || s.find('.') == 0 || s.find('.') == s.length() - 2)
		return (false);

	if (s[0] == '-' || s[0] == '+')
		n++;

	for (int i = n; i < s.length() - 1; i++)
	{
		if (s[i] == '.')
			f++;
		if ((!std::isdigit(s[i]) && s[i] != '.') || f > 1)
			return (false);
	}

	return (true);
}

bool	Cast::isDouble() const
{
	if (s.find('.') == std::string::npos || s.find('.') == 0 || s.find('.') == s.length() - 1)
		return (false);
	int n = 0;
	int f = 0;
	if (s[0] == '-' || s[0] == '+')
		n++;
	for (int i = n; i < s.length(); i++)
	{
		if (s[i] == '.')
			f++;
		if ((!std::isdigit(s[i]) && s[i] != '.') || f > 1)
			return (false);
	}
	return (true);
}

void	Cast::castInt()
{
	std::cout << "Casting int" << std::endl;
	n = std::stoi(s);
	f = static_cast<float>(n);
	d = static_cast<double>(n);
	c = n;
}

void	Cast::castChar()
{
	std::cout << "Casting char" << std::endl;
	c = s[0];
	n = c;
	f = static_cast<float>(n);
	d = static_cast<double>(d);
}

void	Cast::castFloat()
{
	std::cout << "Casting float" << std::endl;
	f = std::stof(s);
	n = static_cast<int>(f);
	d = static_cast<double>(f);
	c = n;
}

void	Cast::castDouble()
{
	std::cout << "Casting double" << std::endl;
	d = std::stod(s);
	n = static_cast<int>(d);
	f = static_cast<float>(d);
	c = n;
}

void	Cast::check()
{
	if (isInt())
		castInt();
	else if (isChar())
		castChar();
	else if (isFloat())
		castFloat();
	else if (isDouble)
		castDouble();
}
