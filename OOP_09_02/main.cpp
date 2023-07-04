#include <iostream>
#include <string>
#include <stdexcept>

#include "fraction.h"
#include "fraction_operators.h"

int main()
{
    int user_num1, user_denom1, user_num2, user_denom2;
    
    std::cout << "Enter a numerator of the fraction 1: " << std::endl;
    std::cin >> user_num1;
    std::cout << "Enter a denominator of the fraction 1: " << std::endl;
    std::cin >> user_denom1;
    std::cout << "Enter a numerator of the fraction 2: " << std::endl;
    std::cin >> user_num2;
    std::cout << "Enter a denominator of the fraction 2: " << std::endl;
    std::cin >> user_denom2;
    
    try
    {
        Fraction f1(user_num1, user_denom1);
        std::cout << "Fraction f1 = " << f1.notation() << std::endl;
        Fraction f2(user_num2, user_denom2);
        std::cout << "Fraction f2 = " << f2.notation() << std::endl << std::endl;
        
        Fraction f3;
        f3 = f1 + f2;
        std::cout << f1.notation() << " + " << f2.notation() << " = " << f3.notation() << std::endl;
        f3 = f1 - f2;
        std::cout << f1.notation() << " - " << f2.notation() << " = " << f3.notation() << std::endl;
        f3 = f1 * f2;
        std::cout << f1.notation() << " * " << f2.notation() << " = " << f3.notation() << std::endl;
        f3 = f1 / f2;
        std::cout << f1.notation() << " / " << f2.notation() << " = " << f3.notation() << std::endl;
        
        std::cout << "++" << f1.notation() << " * (-" << f2.notation() << ") = ";
        f3 = ++f1 * (-f2);
        std::cout << f3.notation() << std::endl;
        std::cout << "Fraction f1 = " << f1.notation() << std::endl;
        
        std::cout << f1.notation() << "-- * " << f2.notation() << " = ";
        f3 = f1-- * f2;
        std::cout << f3.notation() << std::endl;
        std::cout << "Fraction f1 = " << f1.notation() << std::endl;
        
        std::cout << f1.notation() << "++ + ++" << f2.notation() << " = " ;
        f3 = f1++ + ++f2;
        std::cout << f3.notation() << std::endl;
        std::cout << "Fraction f1 = " << f1.notation() << std::endl;
        std::cout << "Fraction f2 = " << f2.notation() << std::endl;
    }
    catch(const std::domain_error& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}
