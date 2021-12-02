/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:29:35 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/02 13:37:50 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::~Point(void)
{
}

Point::Point(const Point &obj)
{
	*this = obj;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point	&Point::operator=(const Point &rhs)
{
	(void)rhs;
	return *this;
}

const Fixed	&Point::getX(void) const
{
	return this->_x;
}

const Fixed	&Point::getY(void) const
{
	return this->_y;
}

std::ostream	&operator<<(std::ostream &os, const Point &rhs)
{
	os << "(" << rhs.getX() << ", " << rhs.getY() << ")";
	return os;
}
