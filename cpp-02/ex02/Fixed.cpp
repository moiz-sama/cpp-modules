#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed(){
    value = 0;
}

Fixed::Fixed(const Fixed& src){
    this->value = src.value ;
}

Fixed::~Fixed(){
}

Fixed& Fixed::operator=(const Fixed& other){
    if (this != &other) {
        this->value = other.value;
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    return value;
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}

Fixed::Fixed(const int IntValue)
{
    value = IntValue * 256;
}

Fixed::Fixed(const float FloatValue)
{
    value = roundf(FloatValue * 256);
}

float Fixed::toFloat(void) const{
    return (float)value / 256;
}

int Fixed::toInt(void) const{
    return value / 256;
}

std::ostream& operator <<(std::ostream &out, const Fixed &number)
{
	out << number.toFloat();
	return out;
}
