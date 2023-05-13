/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivautrav <ivautrav@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:07:40 by ivautrav          #+#    #+#             */
/*   Updated: 2023/05/13 03:33:00 by ivautrav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed& x);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					value;
	static const int	bits_size = 8;
};

#endif