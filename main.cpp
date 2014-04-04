#include "functions.h"
#include <iostream>

using namespace std;

int main()
{

    Fraction a,b,res;
    inputNumber (a);
	inputNumber (b);
    int enter;
    cout<<"Operations"<<endl;
    cout<<"For find summ press 1"<<endl;
    cout<<"For find definition press 2"<<endl;
    cout<<"For find multiplication press 3"<<endl;
    cout<<"For find devision press 4"<<endl;
    cin>>enter;
    comands (a,b,enter);
    outputNumber (res);
    return 0;
}
