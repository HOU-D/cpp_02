#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:

            int fixedValue;
            static const int fractionalBits;

    public:

            Fixed();                
            Fixed(int intValue);    
            Fixed(float floatValue); 
            Fixed(const Fixed& other);
            ~Fixed();              


            static Fixed& min(Fixed& s1, Fixed& s2);
            static Fixed& max(Fixed& s1, Fixed& s2);
            static const Fixed& min(const Fixed& s1, const Fixed& s2);
            static const Fixed& max(const Fixed& s1, const Fixed& s2);

            Fixed   operator = (const Fixed& other);
            bool    operator == (const Fixed& other) const ;
            bool    operator > (const Fixed& other) const ;
            bool    operator < (const Fixed& other) const ;
            bool    operator <= (const Fixed& other) const ;
            bool    operator >= (const Fixed& other) const ;
            bool    operator != (const Fixed& other) const ;

            Fixed   operator * (const Fixed& other) const ;
            Fixed   operator + (const Fixed& other) const ;
            Fixed   operator / (const Fixed& other) const ;
            Fixed   operator - (const Fixed& other) const ;

            Fixed  operator++();       
            Fixed  operator++(int);    
            Fixed  operator--();       
            Fixed  operator--(int);  

            float  toFloat() const;  

        
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
