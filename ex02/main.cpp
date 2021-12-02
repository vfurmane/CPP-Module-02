/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:45:57 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/02 14:09:29 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << a << " is " << ((a < b) ? "lower" : "greater") << " than " << b;
	std::cout << std::endl;
	std::cout << b << " is " << ((a > b) ? "lower" : "greater") << " than " << a;
	std::cout << std::endl;
	std::cout << a << " is " << ((a == a) ? "" : "NOT ") << "equal to " << a;
	std::cout << std::endl;
	std::cout << a << " is " << ((a == b) ? "" : "NOT ") << "equal to " << b;
	std::cout << std::endl;
	std::cout << a << " is " << ((a != b) ? "NOT " : "") << "equal to " << b;
	std::cout << std::endl;
	std::cout << "4 + 3 = " << Fixed(4) + Fixed(3) << std::endl;
	std::cout << "7 - 4 = " << Fixed(7) - Fixed(4) << std::endl;
	std::cout << "5 * 3 = " << Fixed(5) * Fixed(3) << std::endl;
	std::cout << "15 / 3 = " << Fixed(15) / Fixed(3) << std::endl;
	return 0;
}
