/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivautrav <ivautrav@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:07:40 by ivautrav          #+#    #+#             */
/*   Updated: 2023/05/13 04:18:03 by ivautrav         ###   ########.fr       */
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
	
	Fixed&				operator=(const Fixed& other);

	bool				operator>(const Fixed& other) const;
	bool				operator<(const Fixed& other) const;
	bool				operator>=(const Fixed& other) const;
	bool				operator<=(const Fixed& other) const;
	bool				operator==(const Fixed& other) const;
	bool				operator!=(const Fixed& other) const;

	Fixed				operator*(const Fixed& other);
	Fixed				operator/(Fixed const &other);
	Fixed				operator-(Fixed const &other);
	Fixed				operator+(Fixed const &other);

	Fixed				operator++(void);
	Fixed				operator++(int);
	Fixed				operator--(void);
	Fixed				operator--(int);

	static Fixed const	&max(Fixed const &a, Fixed const &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed		&min(Fixed &a, Fixed &b);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

private:
	int					value;
	static const int	bits_size = 8;
};

Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);
std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif