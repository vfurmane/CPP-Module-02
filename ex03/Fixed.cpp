/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:48:13 by vfurmane          #+#    #+#             */
/*   Updated: 2021/12/02 13:43:10 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(const int bits) : _value(bits << Fixed::_fractional_bits)
{
}

Fixed::Fixed(const float bits)
{
	this->_value = roundf(bits * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed::~Fixed(void)
{
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	this->_value = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &rhs)
{
	return this->toFloat() > rhs.toFloat();
}

bool	Fixed::operator<(const Fixed &rhs)
{
	return this->toFloat() < rhs.toFloat();
}

bool	Fixed::operator>=(const Fixed &rhs)
{
	return this->toFloat() >= rhs.toFloat();
}

bool	Fixed::operator<=(const Fixed &rhs)
{
	return this->toFloat() <= rhs.toFloat();
}

bool	Fixed::operator==(const Fixed &rhs)
{
	return this->toFloat() == rhs.toFloat();
}

bool	Fixed::operator!=(const Fixed &rhs)
{
	return this->toFloat() == rhs.toFloat();
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}
Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret = *this;
	this->_value++;
	return ret;
}

Fixed	Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret = *this;
	this->_value--;
	return ret;
}

int		Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return((float)(this->_value) / (1 << _fractional_bits));
}

int	Fixed::toInt(void) const
{
	return this->_value >> Fixed::_fractional_bits;
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return lhs.toFloat() < rhs.toFloat() ? lhs : rhs;
}

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	return lhs.toFloat() < rhs.toFloat() ? lhs : rhs;
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return lhs.toFloat() > rhs.toFloat() ? lhs : rhs;
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	return lhs.toFloat() > rhs.toFloat() ? lhs : rhs;
}
