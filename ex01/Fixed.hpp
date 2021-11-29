/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:46:23 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 14:56:35 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:

	Fixed(void);
	Fixed(const int bits);
	Fixed(const float bits);
	Fixed(const Fixed &obj);
	~Fixed(void);

	Fixed			&operator=(const Fixed &obj);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_value;
	static const int	_fractional_bits = 8;

};

std::ostream	&operator<<(std::ostream &os, const Fixed &obj);

#endif
