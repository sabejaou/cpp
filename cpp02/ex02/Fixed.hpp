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

        bool    operator>( const Fixed &cpy ) const ;
        bool    operator<( const Fixed &cpy ) const ;
        bool    operator>=( const Fixed &cpy ) const ;
        bool    operator<=( const Fixed &cpy ) const ;
        bool    operator==( const Fixed &cpy ) const ;
        bool    operator!=( const Fixed &cpy ) const ;

        Fixed   operator+( const Fixed &cpy ) const ;
        Fixed   operator-( const Fixed &cpy ) const ;
        Fixed   operator*( const Fixed &cpy ) const ;
        Fixed   operator/( const Fixed &cpy ) const ;

        Fixed&  operator++( void );
        Fixed   operator++( int );
        Fixed&  operator--( void );
        Fixed   operator--( int );

        static Fixed& min( Fixed &a, Fixed &b );
        static const Fixed& min( const Fixed &a, const Fixed &b );
        static Fixed& max( Fixed &a, Fixed &b );
        static const Fixed& max( const Fixed &a, const Fixed &b );

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );