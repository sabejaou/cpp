#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    Fixed::_fixed = 0;
}

Fixed::Fixed( const Fixed &cpy ) {
    std::cout << "Copy constructor called" << std::endl;
    Fixed::setRawBits(cpy.getRawBits());
}

Fixed& Fixed::operator=( const Fixed &inst ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &inst)
        this->_fixed = inst.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return Fixed::_fixed;
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixed = raw;
}