#ifndef FRACTION_OPERATORS_H
#define FRACTION_OPERATORS_H

Fraction operator+(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& left, const Fraction& right);
Fraction operator*(const Fraction& left, const Fraction& right);
Fraction operator/(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& right);
Fraction operator++(Fraction& left, int);
Fraction& operator++(Fraction& right);
Fraction operator--(Fraction& left, int);
Fraction& operator--(Fraction& right);

#endif // FRACTION_OPERATORS_H
