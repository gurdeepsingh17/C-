#include <iostream>
#include <fstream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
using namespace std;
 
unsigned int DiceRolling(); // rolls dice, calculates and displays sum
 
int main()
{
 
 
​ofstream myfile ("crap_game.txt", ios::app);  // creating a text file with name:crap_game.txt
 
​//myfile (ios::trunc);
 
  // enumeration with constants that represent the game status
  enum Status { CONTINUE, WON, LOST }; // all caps in constants
 
  // randomize random number generator using current time
  srand( static_cast<unsigned int>( time( 0 ) ) );
 
  unsigned int myPoint = 0; // point if no win or loss on first roll
  Status gameStatus = CONTINUE; // can contain CONTINUE, WON or LOST
  unsigned int sumOfDice = DiceRolling(); // first roll of the dice
 
  // determine game status and point (if needed) based on first roll
  switch ( sumOfDice )
  {
  case 7: // win with 7 on first roll
        case 11: // win with 11 on first roll
           gameStatus = WON;
           break;
        case 2: // lose with 2 on first roll
        case 3: // lose with 3 on first roll
        case 12: // lose with 12 on first roll
           gameStatus = LOST;
           break;
        default: // did not win or lose, so remember point
           gameStatus = CONTINUE; // game is not over
           myPoint = sumOfDice; // remember the point
           cout<< "Point is " << myPoint << endl;
           myfile<< "Point is " << myPoint << endl;
 
           break; // optional at end of switch
     } // end switch
 
     // while game is not complete
     while ( CONTINUE == gameStatus ) // not WON or LOST
     {
        sumOfDice = DiceRolling(); // roll dice again
        // determine game status
              if ( sumOfDice == myPoint ) // win by making point
                 gameStatus = WON;
              else
                 if ( sumOfDice == 7 ) // lose by rolling 7 before point
                    gameStatus = LOST;
           } // end while
 
           // display won or lost message
           if ( WON == gameStatus )
           {
           ​cout << "Player wins" << endl;
           ​myfile << "Player wins" << endl;  //adding this text to crap_game.txt
 
           }
 
           else
           {
           ​cout << "Player loses" << endl;
           ​myfile << "Player loses" << endl;  //adding this text to crap_game.txt
 
           }
        } // end main
 
        // roll dice, calculate sum and display results
        unsigned int DiceRolling()
        {
           // pick random die values
           unsigned int die1 = 1 + rand() % 6; // first die roll
           unsigned int die2 = 1 + rand() % 6; // second die roll
 
           unsigned int sum = die1 + die2; // compute sum of die values
           ofstream myfile ("crap_game.txt", ios::app);  //append the text of this function into the same text file created in main fun
           // display results of this roll
 
           cout<< "Player rolled " << die1 <<" + " << die2
           << " = " << sum << endl;
           myfile<< "Player rolled " << die1 <<" + " << die2  //adding this text to crap_game.txt
                       ​​<< " = " << sum << endl;
          return sum; // return sum of dice
 
           ​} // end function DiceRolling
