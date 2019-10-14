#ifndef COFFEE_H_
#define COFFEE_H_
#include<string>        // header file for using standard string class
 
class Coffee          // class coffee created
{
public:
explicit Coffee( std::string);      //constructor to initialize coffeeName
void setCoffeeName( std::string);   //function to set coffeeName
std::string getCoffeeName() const;  //function to get coffeeName
private:
std::string coffeeName;             //coffee name for this class
};                                  // end class
#endif
/* COFFEE_H_ */
