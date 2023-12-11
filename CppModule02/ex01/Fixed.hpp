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
};

std::ostream &operator<<(std::ostream &o, const Fixed &a);

#endif