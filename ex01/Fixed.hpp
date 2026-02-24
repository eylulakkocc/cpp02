#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int rawBits_;
    static const int fracBits_ = 8;
public:
    Fixed();
    Fixed(const float num);
    Fixed(const int numf);
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    ~Fixed();

    float   toFloat(void) const;
    int     toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif