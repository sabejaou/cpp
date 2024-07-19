#include "Fixed.hpp"

Fixed::Fixed() {
    Fixed::_fixed = 0;
}

Fixed::Fixed( const int n ) : _fixed( n << _maxbits ) {
}

Fixed::Fixed( const float n ) : _fixed( roundf( n * ( 1 << _maxbits ) ) ) {
}

Fixed::Fixed( const Fixed &cpy ) {
    Fixed::setRawBits(cpy.getRawBits());
}

Fixed& Fixed::operator=( const Fixed &inst ) {
    if (this != &inst)
        this->_fixed = inst.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    return ;
}

int Fixed::getRawBits( void ) const {
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

//----------------- Comparison operators -----------------//

bool    Fixed::operator>( const Fixed &cpy ) const {
    return this->getRawBits() > cpy.getRawBits();
}

bool    Fixed::operator<( const Fixed &cpy ) const {
    return this->getRawBits() < cpy.getRawBits();
}

bool    Fixed::operator>=( const Fixed &cpy ) const {
    return this->getRawBits() >= cpy.getRawBits();
}

bool   Fixed::operator<=( const Fixed &cpy ) const {
    return this->getRawBits() <= cpy.getRawBits();
}

bool  Fixed::operator==( const Fixed &cpy ) const {
    return this->getRawBits() == cpy.getRawBits();
}

bool    Fixed::operator!=( const Fixed &cpy ) const {
    return this->getRawBits() != cpy.getRawBits();
}

//------------------ Arithmetic operators ------------------//

Fixed   Fixed::operator+( const Fixed &cpy ) const {
    return Fixed( this->toFloat() + cpy.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &cpy ) const {
    return Fixed( this->toFloat() - cpy.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &cpy ) const {
    return Fixed( this->toFloat() * cpy.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &cpy ) const {
    return Fixed( this->toFloat() / cpy.toFloat() );
}

//------------------ Increment/Decrement operators ------------------//

Fixed&   Fixed::operator++( void ) {
    ++this->_fixed;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp._fixed = this->_fixed++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->_fixed;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp._fixed = this->_fixed--;
    return tmp;
}

//----------------------- Max and Min ----------------------//

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}