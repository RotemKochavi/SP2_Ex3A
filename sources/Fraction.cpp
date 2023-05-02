#include "Fraction.hpp"

using namespace std;
namespace ariel 
{
    Fraction::Fraction(): numerator(0), denominator(1) {}
    Fraction::Fraction(int numerator): numerator(numerator), denominator(1) {}
    Fraction::Fraction(int numerator, int denominator):numerator(numerator), denominator(denominator){}


    int Fraction:: gcd(int a, int b) const { 
        return ( b == 0 ) ? a : gcd(b, a % b); 
    }

    int Fraction::getNumerator() const { 
        return numerator; 
    }
    int Fraction::getDenominator() const {
         return denominator; 
    }
    void Fraction::setNumerator(int numerator) {
         this->numerator = numerator; 
    }
    void Fraction::setDenominator(int denominator) { 
        if( denominator == 0 )
            throw invalid_argument("The denominator must be different from 0");
    
        this->denominator = denominator;
    }
 
    Fraction Fraction::operator+(const Fraction& number1){
        return *this;
    }

    Fraction Fraction::operator+(const float& number1){
        return *this;
    } 

    Fraction Fraction::operator++(){
        return *this;
    }

    Fraction operator+(Fraction const& number1, Fraction const& nember2){
        return number1;
    }
    Fraction Fraction::operator-(const Fraction& number1){
        return *this;
    }
    Fraction Fraction::operator-(const float& number1){
        return *this;
    }

    Fraction Fraction:: operator/(const Fraction& number1){
        return *this;
    }

    Fraction Fraction:: operator/(const float& number1){
        return *this;
    }

    Fraction Fraction:: operator*(const Fraction& number1){
        return *this;
    }

    Fraction Fraction:: operator*(const float& number1){
        return *this;
    }

    Fraction Fraction:: operator++(int number){
        return *this;
    }
    Fraction Fraction:: operator--(){
        return *this;
    }
    
    bool Fraction:: operator>(const Fraction& number1){ 
        return true; 
    }

    bool Fraction:: operator>(const float& number1){
        return true;
    }

    bool Fraction:: operator<(const Fraction& number1){
        return true;
    }

    bool Fraction:: operator<(const float& number1){
        return true;
    }


    bool Fraction:: operator>=(const Fraction& number1){
        return true;
    }
    bool Fraction:: operator>=(const float& number1){
        return true;
    }
    bool Fraction:: operator<=(const Fraction& number1){
        return true;
    }
    bool Fraction:: operator<=(const float& number1){
        return true;
    }
    bool Fraction:: operator==(const Fraction& number1) const{
        return true;
    }
    bool Fraction:: operator==(const float& number1) const{
        return true;
    }
    bool operator==( const Fraction &number1,  const float nember2){
        return true;
    }
    bool operator==( const float number1,  const Fraction &nember2){
        return true;
    }
    
    istream& operator>> (istream& input, Fraction& number1){
        return input;
    }
    
    ostream& operator<< (ostream& output, Fraction const& number1){
        return output;
    }
    
    Fraction operator*(const float& number1, const Fraction& nember2){
        return nember2;
    }


};
