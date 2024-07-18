#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    Fixed::_fixed = 0;
}

Fixed::Fixed( const int n ) : _fixed( n << _maxbits ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixed( std::roundf( n * ( 1 << _maxbits ) ) ) {
    std::cout << "Float constructor called" << std::endl;
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

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _maxbits );
}

int     Fixed::toInt( void ) const {
    return this->_fixed >> this->_maxbits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}