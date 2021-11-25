/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:46:23 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/25 10:51:55 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:

	Fixed(void);
	Fixed(Fixed &obj);
	~Fixed(void);

	Fixed	&operator=(Fixed &obj);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);

private:

	int					_value;
	static const int	_fractional_bits = 8;

};

#endif
