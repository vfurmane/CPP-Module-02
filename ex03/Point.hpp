/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:39:16 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/02 13:35:18 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:

	Point(void);
	~Point(void);
	Point(const Point &obj);
	Point(const float x, const float y);

	Point		&operator=(const Point &rhs);

	const Fixed	&getX(void) const;
	const Fixed	&getY(void) const;

private:

	const Fixed	_x;
	const Fixed	_y;

};

std::ostream	&operator<<(std::ostream &os, const Point &rhs);

#endif
