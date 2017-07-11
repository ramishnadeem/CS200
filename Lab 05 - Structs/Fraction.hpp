
#ifndef _FRACTION_HPP
#define _FRACTION_HPP

struct Fraction
{
    int numerator;
    int denominator;

    void Setup( int n, int d )
    {
        numerator = n;
        denominator = d;
    }

    void Display()
    {
        cout << numerator << "/" << denominator;
    }

    Fraction Add( Fraction other )
    {
        Fraction result;
        Fraction common1;
        Fraction common2;

        common1.Setup( this->numerator * other.denominator, this->denominator * other.denominator );
        common2.Setup( other.numerator * this->denominator, other.denominator * this->denominator );

        result.numerator = common1.numerator + common2.numerator;
        result.denominator = common1.denominator;

        return result;
    }

    Fraction Subtract( Fraction other )
    {
        Fraction result;
        Fraction common1;
        Fraction common2;

        common1.Setup( this->numerator * other.denominator, this->denominator * other.denominator );
        common2.Setup( other.numerator * this->denominator, other.denominator * this->denominator );

        result.numerator = common1.numerator - common2.numerator;
        result.denominator = common1.denominator;

        return result;
    }

    Fraction Multiply( Fraction other )
    {
        Fraction result;
        result.numerator = this->numerator * other.numerator;
        result.denominator = this->numerator * other.denominator;
        return result;
    }

    Fraction Divide( Fraction other )
    {
        Fraction result;
        result.numerator = this->numerator * other.denominator;
        result.denominator = this->denominator * other.numerator;
        return result;
    }
};

#endif