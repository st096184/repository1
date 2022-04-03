//
//  Complex.hpp
//  1hw_2sem
//
//  Created by Федор on 03.04.2022.
//

#ifndef Complex_hpp
#define Complex_hpp
#include <iostream>
#include <stdio.h>
#include <math.h>
#pragma once

class Complex
{
private:
    double re;
    double im;
    
public:
    Complex(double re = 0, double im = 0);
    Complex(const Complex& complex);
    ~Complex();
    double getRE();
    void setRE (double re);
    double getIM();
    void setIM (double im);
    void set(double re, double im);
    
    void print();
    
    Complex& operator=(const Complex& complex);
    
    friend Complex operator*(const double mult, const Complex& complex);
    friend Complex operator*(const Complex& complex, const double mult);
    friend Complex operator*(const Complex& complex1, const Complex& complex2);
    friend Complex operator+(const Complex& complex1, const Complex& complex2);
    friend Complex operator-(const Complex& complex1, const Complex& complex2);
    friend Complex operator/(const Complex& complex1, const Complex& complex2);
    friend int ComplexReverse(const Complex& complex);
    friend int arg(const Complex& complex);
    friend int abs(const Complex& complex);
    friend std::ostream& operator<<(std::ostream& stream, const Complex& complex);
};
#endif /* Complex_hpp */
