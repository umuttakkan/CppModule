#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int x;
        static const int y = 8;
    public:
        Fixed();
        Fixed(const Fixed &);
        ~Fixed();
        Fixed &operator=(const Fixed &);
        Fixed(const int &);
        Fixed(const float &);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int toInt(void)const;
        static Fixed &max(Fixed &, Fixed &);
        static Fixed &min(Fixed &, Fixed &);
        const static Fixed &max(const Fixed &a, const Fixed &b);
        const static Fixed &min(const Fixed &a, const Fixed &b);
        Fixed operator*(Fixed const &fixed);
        Fixed operator+(Fixed const &fixed);
        Fixed operator-(Fixed const &fixed);
        Fixed operator/(Fixed const &fixed);
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);
        bool operator>(const Fixed &b);
        bool operator<(const Fixed &b);
        bool operator>=(const Fixed &b);
        bool operator<=(const Fixed &b);
        bool operator==(const Fixed &b);
        bool operator!=(const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, const Fixed &a);



#endif