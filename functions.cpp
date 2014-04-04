#include "functions.h"
#include <iostream>
#include <math.h>

using namespace std;
Fraction convertToImproper (struct Fraction a);
Fraction proper (struct Fraction a);
Fraction summ (struct Fraction a, struct Fraction b);
Fraction defenition (struct Fraction a, struct Fraction b);
Fraction multiplication (struct Fraction a, struct Fraction b);
Fraction devision (struct Fraction a, struct Fraction b);
Fraction use(struct Fraction a,struct Fraction b);
Fraction sign (struct Fraction res);


void comands (struct Fraction a, struct Fraction b,int enter)
{
    if (enter=='1')
    {
        summ(a,b);
    }
    if (enter=='2')
    {
        defenition(a,b);
    }
    if (enter=='3')
    {
        multiplication(a,b);
    }
    if (enter=='4')
    {
        devision(a,b);
    }
}

void inputNumber (struct Fraction a)
{
    cout<<"Enter the sign"<<endl;
    cin>>a.sign;
    cout<<"Enter number"<<endl;
    cout<<"   Integer part: ";
    cin>>a.integer;
    cout<<"   Numerator: ";
    cin>>a.numenator;
    cout<<"   Denominator (not 0): ";
    cin>>a.denominator;
}

void outputNumber (struct Fraction a)
{
    {
        cout<<"result"<<" "<<a.sign<<"   "<<a.integer<<" "<<a.numenator<<" / "<<a.denominator<<endl;
    }
}

Fraction conNum (struct Fraction a)
{
    a.integer=fabs(a.integer);
    a.numenator=fabs(a.numenator);
    a.denominator=fabs(a.denominator);
    if (a.sign=='-')
    {
        a.numenator=-(a.numenator+a.integer*a.denominator);
        a.denominator=a.denominator;
        a.integer=0;
    }
    if (a.sign=='+')
    {
        a.numenator=a.numenator+a.integer*a.denominator;
        a.denominator=a.denominator;
        a.integer=0;
    }
}





Fraction summ (struct Fraction a, struct Fraction b)

{
    Fraction x,y;
    Fraction res;
    use(a,b);
    res.numenator=x.numenator*y.denominator+y.numenator*x.denominator;
    res.denominator=x.denominator*y.denominator;
    proper(res);
    return sign(res);
}

Fraction defenition (struct Fraction a, struct Fraction b)
{
    Fraction x,y;
    Fraction res;
    use(a,b);
    res.numenator=x.numenator*y.denominator-y.numenator*x.denominator;
    res.denominator=x.denominator*y.denominator;
    proper(res);
    return sign(res);
}


Fraction multiplication (struct Fraction a, struct Fraction b)
{
    Fraction x,y;
    Fraction res;
    use(a,b);
    res.numenator=x.numenator*y.numenator;
    res.denominator=x.denominator*y.denominator;
    proper(res);
    return sign(res);
}

Fraction devision (struct Fraction a, struct Fraction b)
{
    Fraction x,y;
    use(a,b);
    Fraction res;
    res.numenator=x.numenator*y.denominator;
    res.denominator=x.denominator*y.numenator;
    proper(res);
    return (res);

}


Fraction sign (struct Fraction res)
{
    if (res.numenator<0||res.denominator<0)
    {
        res.numenator=fabs(res.numenator);
            res.denominator=fabs(res.denominator);
            res.integer=fabs(res.integer);
        res.sign='-';
    }
    else

        res.sign='+';
    return   proper(res);
}

Fraction use(struct Fraction a,struct Fraction b)
{
    Fraction x,y;


    if (a.denominator!=0&&b.denominator!=0)
    {
        x=conNum(a);
        y=conNum(b);
    }
}



Fraction proper (struct Fraction a)
{
    a.numenator=fabs(a.numenator);
    a.denominator=fabs(a.denominator);


    if (a.numenator==a.denominator)
    {
        a.integer=a.integer+1;
        a.numenator=0;
    }

    else
    {
        a.integer=a.numenator/a.denominator;
        a.numenator=a.numenator-a.denominator*(a.numenator/a.denominator);
        a.denominator=a.denominator;
    }

    int c;
    while (a.numenator%a.denominator)
    {
        c=a.numenator%a.denominator;
        a.numenator=a.denominator;
        a.denominator=c;
    }
    if (c!=1)
    {
        a.numenator/=c;
        a.denominator/=c;
    }
    return a;
}
