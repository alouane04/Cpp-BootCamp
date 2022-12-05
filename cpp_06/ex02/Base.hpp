/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:58:18 by ariahi            #+#    #+#             */
/*   Updated: 2022/12/05 17:06:04 by ariahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define	BASR_HPP

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base * generate(void);

void identify(Base* p);

void identify(Base& p);

#endif