/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:17 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/05 12:21:24 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast()
{
	this->n = 0;
	this->c = 0;
	this->f = 0.0f;
	this->d = 0.0;
	this->b = false;
	this->s = "";
}

Cast::Cast(std::string s)
{
	this->n = 0;
	this->c = 0;
	this->f = 0.0f;
	this->d = 0.0;
	this->b = false;
	this->s = s;
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
	this->b = other.b;
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
	for (int i = 0; i < (int)s.length(); i++)
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

void	Cast::print()
{
	std::cout << std::fixed << std::setprecision(1);

	////////////////Char////////////////////

	std::cout << "char: ";
	if (c < 0)
		std::cout << "Impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "Is not printable" << std::endl;
	else
		std::cout << c << std::endl;
	
	/////////////////Int/////////////////////

	std::cout << "int: ";
	if ((b || s.length() >= 10 && s.compare("2147483647") > 0)
		|| (b || s.length() >= 11 && s.compare("-2147483647") > 0))
		std::cout << "impossible" << std::endl;
	else if (n >= std::numeric_limits<int>::min() && n <= std::numeric_limits<int>::max())
		std::cout << n << std::endl;

	/////Float////////////Double//////////

	std::cout << "float: " << f << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

bool	Cast::isLimit()
{
	if (!s.compare("-inf") || !s.compare("-inff"))
	{
		f = std::numeric_limits<float>::infinity();
		f = -1 * f;
		d = std::numeric_limits<double>::infinity();
		d = -1 * d;
		return (b = true, b);
	}
	else if (!s.compare("+inf") || !s.compare("+inff"))
	{
		f = std::numeric_limits<float>::infinity();
		d = std::numeric_limits<double>::infinity();
		return (b = true, b);
	}
	if (!s.compare("nan") || !s.compare("nanf"))
	{
		n = std::numeric_limits<int>::quiet_NaN();
		d = std::numeric_limits<double>::quiet_NaN();
		f = std::numeric_limits<float>::quiet_NaN();
		return (b = true, b);
	}
	return (b);
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
	else if (isLimit()){}
	else
		throw Cast::UnknownType();
	print();
}
