#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct Fraction
{
	char sign;
    int integer;
    int numenator;
    int denominator;
};

void comands (struct Fraction a, struct Fraction b,int enter);
void outputNumber (struct Fraction a);
void inputNumber (struct Fraction a);
Fraction ConNum (struct Fraction a);


#endif
