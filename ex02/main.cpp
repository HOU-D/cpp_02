/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:56:32 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/03 16:46:43 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 )  );

    std::cout << "a = " << a << std::endl;
    std::cout << std::endl;

    std::cout << "++a = " << ++a << std::endl;    
    std::cout << "a = " << a << std::endl;
    std::cout << std::endl;
    
    std::cout << "a++ = " <<  a++ << std::endl;    
    std::cout << "a = " <<  a << std::endl;
    std::cout << std::endl;
    
    std::cout << "b = " << b << std::endl;
    std::cout << std::endl;
    
    std::cout << "max (a , b) = " << Fixed::max( a, b ) << std::endl;
    std::cout << std::endl;
    
    std::cout << "min (a , b) = " << Fixed::min( a, b ) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a > b) = " << (a > b) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a < b) = " << (a < b) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a >= b) = " << (a >= b) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a <= b) = " << (a <= b) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a == b) = " << (a == b) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a != b) = " << (a != b) << std::endl;
    std::cout << std::endl;

    std::cout << "(a + b) = " << (a + b) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a - b) = " << (a - b) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a * b) = " << (a * b) << std::endl;
    std::cout << std::endl;
    
    std::cout << "(a / b) = " << (a / b) << std::endl;
    std::cout << std::endl;
    
    return (0);
}