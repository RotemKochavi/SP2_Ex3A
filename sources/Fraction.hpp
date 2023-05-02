#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

namespace ariel {
    class Fraction{
        int numerator;
        int denominator;

    public:
        Fraction();
        Fraction(int numerator);
        Fraction(int numerator, int denominator);

        int gcd(int a, int b) const;

        int getNumerator() const;
        int getDenominator() const;
        void setNumerator(int numerator);
        void setDenominator(int denominator);
        
        Fraction operator+(const Fraction& number1);
        Fraction operator+(const float& number1);
        Fraction operator++();
        
        Fraction operator-(const Fraction& number1);
        Fraction operator-(const float& number1);
        
        Fraction operator/(const Fraction& number1);
        Fraction operator/(const float& number1);

        Fraction operator*(const Fraction& number1);
        Fraction operator*(const float& number1);

        Fraction operator++(int number);
        Fraction operator--();
        
        bool operator>(const Fraction& number1);
        bool operator>(const float& number1);
        
        bool operator<(const Fraction& number1);
        bool operator<(const float& number1);

        bool operator>=(const Fraction& number1);
        bool operator>=(const float& number1);

        bool operator<=(const Fraction& number1);
        bool operator<=(const float& number1);


        bool operator==(const Fraction& number1) const;
        bool operator==(const float& number1) const;
    
        friend bool operator==( const Fraction &number1,  const float number2) ;
        friend bool operator==( const float number1,  const Fraction &number2);

        friend ostream& operator<< (ostream& output, Fraction const& number1);
        friend istream& operator>> (istream& input, Fraction& number1);
        
        friend Fraction operator+(Fraction const& number1, Fraction const& number2);
        friend Fraction operator*(const float& number1,const Fraction& number2);
    };

}

