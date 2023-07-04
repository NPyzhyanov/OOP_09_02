#include <string>
#include <stdexcept>
#include <algorithm>

#include "fraction.h"

Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int numerator_, int denominator_)
{
    if (denominator_ == 0)
    {
        throw std::domain_error("Cannot create a fraction with zero denominator");
    }
    
    numerator = denominator_ < 0 ? -numerator_ : numerator_;
    denominator = denominator_ < 0 ? -denominator_ : denominator_;
    
    int divisor = 2;
    while(divisor <= std::min(abs(numerator), abs(denominator)))
    {
        if ((denominator % divisor == 0) && (numerator % divisor == 0))
        {
            numerator /= divisor;
            denominator /= divisor;
        }
        else
        {
            divisor++;
        }
    }
}

Fraction::Fraction(const Fraction& src)
{
    numerator = src.numerator;
    denominator = src.denominator;
}

void Fraction::operator=(const Fraction& src)
{
    numerator = src.numerator;
    denominator = src.denominator;
}

Fraction::~Fraction()
{
}

std::string Fraction::notation()
{
    std::string out_str = "";
    if (denominator == 1)
    {
        out_str += std::to_string(numerator);
    }
    else if (numerator == 0)
    {
        out_str += std::to_string(0);
    }
    else
    {
        out_str += std::to_string(numerator) + "/" + std::to_string(denominator);
    }
    return out_str;
}
