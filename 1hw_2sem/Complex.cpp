//
//  Complex.cpp
//  1hw_2sem
//
//  Created by Федор on 03.04.2022.
//

#include "Complex.hpp"
Complex::Complex(double re, double im) : re(re), im(im) {}

Complex::Complex(const Complex& complex) : re(complex.re), im(complex.im) {}

Complex::~Complex()
{
    this->re = 0;
    this->im = 0;
}

double Complex::getRE()
{
    return this->re;
}

void Complex::setRE(double re)
{
    this->re = re;
}

double Complex::getIM()
{
    return this->im;
}

void Complex::setIM(double im)
{
    this->im = im;
}

void Complex::set(double re, double im)
{
    this->re = re;
    this->im = im;
}

void Complex::print()
{
    std::cout << "{" << this->re << ";" << this->im << "}" << std::endl;
}

//присваивание
Complex& Complex::operator=(const Complex& complex)
{
    this->re = complex.re;
    this->im = complex.im;
    return *this;
}
//нахождение обратного
int ComplexReverse(const Complex& complex)
{
    return complex.re + -1 * complex.im;
}

//аргумент числа
int arg(const Complex& complex)
{
    return acos(complex.re / sqrt(complex.re * complex.re + complex.im * complex.im));
}

//модуль числа
int abs(const Complex& complex)
{
    return sqrt(complex.re * complex.re + complex.im * complex.im);
}

 //сложение комплексных чисел
Complex operator+(const Complex& complex1, const Complex& complex2)
{
    return Complex(complex1.re + complex2.re, complex1.im + complex2.im);
}

//вычитание комплексныхч чисел
Complex operator-(const Complex& complex1, const Complex& complex2)
{
    return Complex(complex1.re - complex2.re, complex1.im - complex2.im);
}

//умножение на вещественное
Complex operator*(const double mult, const Complex& complex)
{
    return Complex(complex.re * mult, complex.im * mult);
}

Complex operator*(const Complex& complex, const double mult)
{
    return Complex(mult * complex.re, mult * complex.im);
}

//умножение на комплексное
Complex operator*(const Complex& complex1, const Complex& complex2)
{
    return Complex(complex1.re * complex2.re - complex1.im * complex2.im, complex1.re * complex2.im + complex2.re * complex1.re);
}

//деление комплексных
Complex operator/(const Complex& complex1, const Complex& complex2)
{
    return Complex((complex1.re * complex2.re + complex1.im * complex2.im) / complex1.re * complex1.re + complex1.im * complex1.im, (complex1.re * complex2.im - complex2.re * complex1.im) / complex1.re * complex1.re + complex1.im * complex1.im);
}

std::ostream& operator<<(std::ostream& stream, const Complex& complex)
{
    stream << "{" << complex.re << "; " << complex.im << "}";
    return stream;
}




















