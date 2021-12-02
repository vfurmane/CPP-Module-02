/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:37:33 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/02 14:15:23 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point);

int	main(void)
{
	// IN
	{
		Point	p1(0, 2);
		Point	p2(-1, 0);
		Point	p3(1, 0);
		Point	point(0, 1);

		std::cout << "The point is ";
		if (!bsp(p1, p2, p3, point))
			std::cout << "NOT ";
		std::cout << "in the triangle" << std::endl;
	}
	// OUT
	{
		Point	p1(0, 2);
		Point	p2(-1, 0);
		Point	p3(1, 0);
		Point	point(1, 2);

		std::cout << "The point is ";
		if (!bsp(p1, p2, p3, point))
			std::cout << "NOT ";
		std::cout << "in the triangle" << std::endl;
	}
	// EDGE
	{
		Point	p1(3, 0);
		Point	p2(5, 4);
		Point	p3(6, 0);
		Point	point(4, 2);

		std::cout << "The point is ";
		if (!bsp(p1, p2, p3, point))
			std::cout << "NOT ";
		std::cout << "in the triangle" << std::endl;
	}
	// IN
	{
		Point	p1(3, 0);
		Point	p2(5, 4);
		Point	p3(6, 0);
		Point	point(5, 3);

		std::cout << "The point is ";
		if (!bsp(p1, p2, p3, point))
			std::cout << "NOT ";
		std::cout << "in the triangle" << std::endl;
	}
	return 0;
}
