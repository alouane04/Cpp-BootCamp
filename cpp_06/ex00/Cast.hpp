/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:00:31 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/04 19:39:53 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

#include "iostream"

class Cast
{
private:
	int			n;
	char		c;
	float		f;
	double		d;
	std::string	s;
public:
	Cast();
	Cast(std::string s);
	Cast(const Cast& other);
	~Cast();

	Cast&	operator=(const Cast& other);
	
	class UnknownType : public std::exception
	{
		public:
			virtual	const char* what() const throw() { return "Unknown type";} 
	};

	////////////////////
	
	void	check();
	
	bool	isInt() const;
	
	bool	isChar() const;
	
	bool	isFloat() const;

	bool	isDouble() const;

	/////////////////////

	void	castInt();

	void	castChar();

	void	castFloat();

	void	castDouble();

	//////////////////////

	
};

#endif