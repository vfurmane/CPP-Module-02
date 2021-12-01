/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:46:23 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/01 12:34:42 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:

	Fixed(void);
	Fixed(const int bits);
	Fixed(const float bits);
	Fixed(const Fixed &obj);
	~Fixed(void);

	Fixed				&operator=(const Fixed &rhs);
	bool				operator>(const Fixed &rhs);
	bool				operator<(const Fixed &rhs);
	bool				operator>=(const Fixed &rhs);
	bool				operator<=(const Fixed &rhs);
	bool				operator==(const Fixed &rhs);
	bool				operator!=(const Fixed &rhs);
	Fixed				operator+(const Fixed &rhs) const;
	Fixed				operator-(const Fixed &rhs) const;
	Fixed				operator*(const Fixed &rhs) const;
	Fixed				operator/(const Fixed &rhs) const;
	Fixed				operator++();
	Fixed				operator++(int);
	Fixed				operator--();
	Fixed				operator--(int);

	int					getRawBits(void) const;
	void				setRawBits(const int raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	static Fixed		&min(Fixed &lhs, Fixed &rhs);
	static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
	static Fixed		&max(Fixed &lhs, Fixed &rhs);
	static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);

private:

	int					_value;
	static const int	_fractional_bits = 8;

};

std::ostream	&operator<<(std::ostream &os, const Fixed &obj);

#endif
