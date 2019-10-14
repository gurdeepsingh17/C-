#include<iostream>                    // header file for input and output stream
 
#include "Coffee.h"                    // class Coffee definition is included
 
using namespace std;
 
int main()                         // program execution begins from main function
{
​int option;             // variable option as data type integer is declared
 
​Coffee coffee1("French vanilla");        //  object coffee1 created
​Coffee coffee2("Hot Chocolate");         //  object coffee2 created
​Coffee coffee3("Regular");               //  object coffee3 created
​Coffee coffee4("Dark Roast");
   cout<<"welcome to tim horton's drive thru"<<endl;
​cout<<"Select your option:"<<endl<<"1:French vanilla"<<endl<<"2:Hot Chocolate"<<endl<<"3:Regular"<<endl<<"4:Dark Roast"<<endl;   // coffee options are displayed to customers
​cin>>option;                          // customer gives the input
​if(option==1)                        // if customer select option 1
​{
​cout<<"you selected "<<coffee1.getCoffeeName()<<endl;     // selected coffee choice 1 is displayed
​​cout<<"pay $2 "<<endl;           // customer is requested to pay
​​cout<<"enjoy your coffee"<<endl;
​}
​else if(option==2)                       // if customer select option 2
​{
​​cout<<"you selected "<<coffee2.getCoffeeName()<<endl;     // selected coffee choice 2 is displayed
​​cout<<"pay $4 "<<endl;           // customer is requested to pay
​​​​cout<<"enjoy your coffee"<<endl;
​}
​else if(option==3)                          // if customer select option 3
​{
​​cout<<"you selected "<<coffee3.getCoffeeName()<<endl;     // selected coffee choice 3 is displayed
​​cout<<"pay $1.80 "<<endl;            // customer is requested to pay
​​​​cout<<"enjoy your coffee"<<endl;
​}
​else if(option==4)                     // if customer select option 4
​​{
​​​cout<<"you selected "<<coffee4.getCoffeeName()<<endl;  // selected coffee choice 4 is displayed
​​​cout<<"pay $2.65 "<<endl;     // customer is requested to pay
​​​​​cout<<"enjoy your coffee"<<endl;
​​}
​else
​{
​​cout<<"you entered wrong choice"<<endl;                    // wrong choice entered message displayed
​}
​}     
