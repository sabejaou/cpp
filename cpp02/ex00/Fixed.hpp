#pragma once

#include <iostream>

class Fixed{
    private:
        int _fixed;
        static const int _maxbits = 8;
    public:
        Fixed();
        Fixed( const Fixed &cpy );
        Fixed& operator=( const Fixed &inst );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};