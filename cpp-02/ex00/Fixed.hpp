#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private : 
        int value;
        static const int fract_bits;
    public :
        Fixed ();
        Fixed (const Fixed& src);
        ~Fixed ();
        Fixed& operator=(const Fixed& other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed (const int IntValue);
        Fixed (const float FloatValue);
};

#endif