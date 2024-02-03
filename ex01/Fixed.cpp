/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:55:37 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/03 15:34:18 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedValue = 0;
}

Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    fixedValue = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    fixedValue =  roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    
    fixedValue = other.fixedValue;
    return *this;
}

float Fixed::toFloat() const
{
    return (float(fixedValue) / (1 << fractionalBits));
}

int Fixed::toInt() const
{
    return fixedValue / (1 << fractionalBits);
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
    
    output << fixed.toFloat();
    return output;
}
