/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:56:52 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/03 15:31:25 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
    fixedValue = 0;
} 

Fixed::Fixed(const int intValue)
{
    fixedValue = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
    fixedValue = roundf(floatValue * (1 << fractionalBits));
} 

Fixed::Fixed(const Fixed& other)
{
    fixedValue = other.fixedValue;
} 

Fixed::~Fixed()
{
    
}

Fixed Fixed::operator = (const Fixed& other)
{
    fixedValue = other.fixedValue;
    return *this;
}

bool Fixed::operator > (const Fixed& other) const
{
    return fixedValue > other.fixedValue;
}

bool Fixed::operator < (const Fixed& other) const
{
    return fixedValue < other.fixedValue;
}

bool Fixed::operator >= (const Fixed& other) const
{
    return fixedValue >= other.fixedValue;
}

bool Fixed::operator <= (const Fixed& other) const
{
    return fixedValue <= other.fixedValue;
}

bool Fixed::operator == (const Fixed& other) const
{
    return fixedValue == other.fixedValue;
}

bool Fixed::operator != (const Fixed& other) const
{
    return fixedValue != other.fixedValue;
}

Fixed Fixed::operator + (const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}


Fixed Fixed::operator - (const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator * (const Fixed& other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator / (const Fixed& other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator++() //return reference
{
    fixedValue =fixedValue + 1;
    return  *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed tmp = *this;
    fixedValue = fixedValue + 1;
    return  (tmp);
}

Fixed Fixed::operator--()// return reference
{
    fixedValue = fixedValue - 1;
    return *this;
}

Fixed Fixed::operator--(int) 
{
    Fixed temp(*this);
    fixedValue = fixedValue - 1;
    return temp;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

float Fixed::toFloat() const
{   
    return float(fixedValue) / (1 << fractionalBits);
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
    output << fixed.toFloat();
    return output;
}
