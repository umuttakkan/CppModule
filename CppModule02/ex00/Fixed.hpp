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
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif