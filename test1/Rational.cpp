//
//  Rational.cpp
//  test1
//
//  Created by Федор on 04.04.2022.
//

#include "Rational.hpp"

Fraction::Fraction(long long numerator, long long denominator) : numerator(numerator), denominator(denominator) {}

Fraction::Fraction(const Fraction& fraction) : numerator(fraction.numerator), denominator(fraction.denominator) {}

Fraction::~Fraction()
{
    this->numerator = 0;
    this->denominator = 0;
}

double Fraction::getNUM()
{
    return this->numerator;
}

void Fraction::setNUM(double numerator)
{
    this->numerator = numerator;
}

double Fraction::getDEN()
{
    return this->denominator;
}

void Fraction::setDEN(double denominator)
{
    this->denominator = denominator;
}

void Fraction::simplify()
{
    if(denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }
    for (int i = 2; i <= abs(denominator) && i <= abs(numerator); ++i)
    {
        if (numerator % i == 0 && denominator % i == 0)
         {
         numerator /= i;
         denominator /= i;
         --i;
         }
    }
}

int Fraction::reverse()
{
    long long a = numerator;
    return (numerator =denominator, denominator = a);
}

Fraction& Fraction::operator=(const Fraction& fraction)
{
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
    return *this;
}

Fraction Fraction::operator-()
{
    return Fraction(-this->numerator, -this->denominator);
}

Fraction operator*(const double mult, const Fraction& fraction)
{
    return Fraction(fraction.numerator * mult, fraction.denominator);
    void simplify();
}

Fraction  operator*(const Fraction& fraction, const double mult)
{
    return Fraction(fraction.numerator * mult, fraction.denominator);
    void simplify();
}

Fraction  operator*(const Fraction& fraction1, const Fraction& fraction2)
{
    return Fraction(fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator);
    void simplify();
}

Fraction Fraction::operator+(const Fraction& fraction)
{
    return Fraction((this->numerator * fraction.denominator + fraction.numerator * this->denominator), this->denominator * fraction.denominator);
    void simplify();
}

Fraction operator+(const Fraction& fraction1, const Fraction& fraction2)
{
    return Fraction((fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator),  fraction1.denominator * fraction2.denominator);
    void simplify();
}

bool Fraction::operator==(const Fraction& fraction)
{
    return (this->numerator == fraction.numerator) && (this->denominator == fraction.denominator);
}

bool Fraction::operator<(const Fraction& fraction)
{
    void simplify();
    return (this->numerator < fraction.numerator) && (this->denominator >= fraction.denominator);
}

bool Fraction::operator>(const Fraction& fraction)
{
    void simplify();
    return (this->numerator > fraction.numerator) && (this->denominator <= fraction.denominator);
}

bool Fraction::operator<=(const Fraction& fraction)
{
    void simplify();
    return (this->numerator <= fraction.numerator) && (this->denominator >= fraction.denominator);
}

bool Fraction::operator>=(const Fraction& fraction)
{
    void simplify();
    return (this->numerator >= fraction.numerator) && (this->denominator <= fraction.denominator);
}

Fraction operator-(const Fraction& fraction1, const Fraction& fraction2)
{
    void simplify();
    return Fraction((fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator), fraction1.denominator * fraction2.denominator);
}

Fraction operator/(const Fraction& fraction1, const Fraction& fraction2)
{
    return Fraction(fraction1.numerator * fraction2.denominator, fraction1.denominator * fraction2.numerator);
    void simplify();
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
    stream << "{" << fraction.numerator << "; " << fraction.denominator << "}";
    return stream;
}











