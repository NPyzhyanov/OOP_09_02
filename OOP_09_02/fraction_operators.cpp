#include <string>

#include "fraction.h"
#include "fraction_operators.h"

Fraction operator+(const Fraction& left, const Fraction& right)
{
    int result_numerator;
    int result_denominator;
    if (left.denominator == right.denominator)
    {
        result_numerator = left.numerator + right.numerator;
        result_denominator = left.denominator;
    }
    else
    {
        result_numerator = left.numerator * right.denominator + right.numerator * left.denominator;
        result_denominator = left.denominator * right.denominator;
    }
    return Fraction(result_numerator, result_denominator);
}

Fraction operator-(const Fraction& left, const Fraction& right)
{
    int result_numerator;
    int result_denominator;
    if (left.denominator == right.denominator)
    {
        result_numerator = left.numerator - right.numerator;
        result_denominator = left.denominator;
    }
    else
    {
        result_numerator = left.numerator * right.denominator - right.numerator * left.denominator;
        result_denominator = left.denominator * right.denominator;
    }
    return Fraction(result_numerator, result_denominator);
}

Fraction operator*(const Fraction& left, const Fraction& right)
{
    int result_numerator = left.numerator * right.numerator;
    int result_denominator = left.denominator * right.denominator;
    return Fraction(result_numerator, result_denominator);
}

Fraction operator/(const Fraction& left, const Fraction& right)
{
    int result_numerator = left.numerator * right.denominator;
    int result_denominator = left.denominator * right.numerator;
    return Fraction(result_numerator, result_denominator);
}

Fraction operator-(const Fraction& right)
{
    return Fraction(-right.numerator, right.denominator);
}

Fraction operator++(Fraction& left, int)
{
    Fraction copy = left;
    left.numerator += left.denominator;
    return copy;
}

Fraction& operator++(Fraction& right)
{
    right.numerator += right.denominator;
    return right;
}

Fraction operator--(Fraction& left, int)
{
    Fraction copy = left;
    left.numerator -= left.denominator;
    return copy;
}

Fraction& operator--(Fraction& right)
{
    right.numerator -= right.denominator;
    return right;
}
