#include "Fixed.hpp"

Fixed::Fixed() : rawBits_(0)
{
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->rawBits_ = other.getRawBits();
    return *this;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (rawBits_);
}

void Fixed::setRawBits(int const raw)
{
	rawBits_ = raw;
}