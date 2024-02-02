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
          Fixed(const int intValue);   
          Fixed(const float floatValue); 
          Fixed(const Fixed& other);   
          Fixed& operator=(const Fixed& other);  
          ~Fixed(); 

          int getRawBits( void ) const;
          float toFloat() const;
          int toInt() const;     
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
