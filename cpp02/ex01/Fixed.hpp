#pragma once

#include <iostream>
#include <cmath>
class Fixed{
    private:
        int _fixed;
        static const int _maxbits = 8;
    public:
        Fixed();
        Fixed( const int n );
        Fixed( const float n );
        Fixed( const Fixed &cpy );
        Fixed& operator=( const Fixed &inst );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );