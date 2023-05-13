/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivautrav <ivautrav@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:07:40 by ivautrav          #+#    #+#             */
/*   Updated: 2023/05/13 03:51:12 by ivautrav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(const float);
	Fixed(const int value);
	~Fixed(void);
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed& other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int					value;
	static const int	bits_size = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif