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
          Fixed(const Fixed& other);   
          Fixed& operator=(const Fixed& other);  
          ~Fixed(); 

          Fixed(const int intValue);   
          Fixed(const float floatValue); 

          float     toFloat() const;
          int       toInt() const;    
           
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif
