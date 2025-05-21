#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
# include <cmath>

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
        float toFloat( void ) const;
        int   toInt(void) const;
        bool operator >(const Fixed &otherObject);
		bool operator <(const Fixed &otherObject);
		bool operator >=(const Fixed &otherObject);
		bool operator <=(const Fixed &otherObject);
		bool operator ==(const Fixed &otherObject);
		bool operator !=(const Fixed &otherObject);
        Fixed operator +(const Fixed &otherObject);
		Fixed operator -(const Fixed &otherObject);
		Fixed operator *(const Fixed &otherObject);
		Fixed operator /(const Fixed &otherObject);
        Fixed operator ++(void);
		Fixed operator ++(int);
		Fixed operator --(void);
		Fixed operator --(int);
        static Fixed& min(Fixed &number1, Fixed &number2);
        static const Fixed& min(const Fixed &number1, const Fixed &number2);
		static Fixed& max(Fixed &number1, Fixed &number2);
		static const Fixed& max(const Fixed &number1, const Fixed &number2);
};

std::ostream& operator <<(std::ostream &out, const Fixed &number);

#endif