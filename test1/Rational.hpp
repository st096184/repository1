//
//  Rational.hpp
//  test1
//
//  Created by Федор on 04.04.2022.
//

#ifndef Rational_hpp
#define Rational_hpp
#pragma once
#include <math.h>
#include <stdio.h>
#include <iostream>
class Fraction
{
private:
    long long numerator;
    long long denominator;
    
public:
    Fraction(long long numerator = 0, long long denominator = 0);
    Fraction(const Fraction& fraction);
    ~Fraction();
    
    double getNUM();
    void setNUM(double numerator);
    double getDEN();
    void setDEN(double denominator);
    void simplify();
   int reverse();
       
    Fraction& operator=(const Fraction& fraction);
    Fraction operator-();
    Fraction operator+(const Fraction& fraction);
    
    friend Fraction operator+(const Fraction& fraction1, const Fraction& fraction2);
    friend Fraction operator*(const double mult, const Fraction& fraction);
    friend Fraction operator*(const Fraction& fraction, const double mult);
    friend Fraction operator*(const Fraction& fraction1, const Fraction& fraction2);
    friend Fraction operator-(const Fraction& fraction1, const Fraction& fraction2);
    friend Fraction operator/(const Fraction& fraction1, const Fraction& fraction2);
    friend std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);
   
    bool operator==(const Fraction& fraction);
    bool operator<(const Fraction& fraction);
    bool operator>(const Fraction& fraction);
    bool operator<=(const Fraction& fraction);
    bool operator>=(const Fraction& fraction);
};
#endif
