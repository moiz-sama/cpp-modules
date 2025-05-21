#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& src){
    std::cout << "copy constructor called" << std::endl;
    this->value = src.value ;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "copy assignment operator called" << std::endl;
    if (this != &other) {
        this->value = other.value;
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}
