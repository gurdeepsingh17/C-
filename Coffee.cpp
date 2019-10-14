#include<iostream>           // header file for input and output stream
 
#include "Coffee.h"          // class Coffee definition
using namespace std;
 
Coffee::Coffee(string name)  // constructor initializes coffeeName
 : coffeeName( name )       // member initializer
{
 
}
void Coffee::setCoffeeName( string name)
{
coffeeName=name;            // coffee is stored in object
 
}                           // end setCoffeeName
string Coffee::getCoffeeName() const
{
return coffeeName;           //this function returns coffee name
}
