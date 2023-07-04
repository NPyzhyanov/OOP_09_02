#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
    Fraction();
    Fraction(int numerator_, int denominator_);
    Fraction(const Fraction& src);
    void operator=(const Fraction& src);
    ~Fraction();
    
    std::string notation();
    
    friend Fraction operator+(const Fraction& left, const Fraction& right);
    friend Fraction operator-(const Fraction& left, const Fraction& right);
    friend Fraction operator*(const Fraction& left, const Fraction& right);
    friend Fraction operator/(const Fraction& left, const Fraction& right);
    friend Fraction operator-(const Fraction&right);
    friend Fraction operator++(Fraction& left, int);
    friend Fraction& operator++(Fraction& right);
    friend Fraction operator--(Fraction& left, int);
    friend Fraction& operator--(Fraction& right);
    
private:
    int numerator;
    int denominator;
    
};

#endif // FRACTION_H
