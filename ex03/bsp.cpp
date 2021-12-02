/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:16:10 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/02 13:41:24 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	sign(const Point &p1, const Point &p2, const Point &p3)
{
    return (p1.getX() - p3.getX())
		* (p2.getY() - p3.getY())
		- (p2.getX() - p3.getX())
		* (p1.getY() - p3.getY());
}

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point)
{
    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
