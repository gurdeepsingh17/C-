#include <iostream>   //header file included to allow program to perform input and output
 
#include <string>     //header file included to use the string data type
#include <fstream>    //header file included to perform file handling operation
using namespace std;  //cout, cin defined inside std namespace
 
int main(int argc, char* argv[])  //main function begins
 
{      /* The integer, argc is the Argument Count (hence argc).
      It is the number of arguments passed into the program from the command line, including the name of the program. */
​//The array of character pointers char* argv[] is the listing of all the arguments.
​
​int line_counter = 0;  //declaring and initialising the integer variable for counting the number of lines.
 
​string last;   //declaring the string variable last
​ifstream read_file(argv[1]);     //argv[0] is the first argument which is the name of the program and argv[1] here is the second argument which is the text file and the contents of the text file will be in the character array argv[]
 
​read_file.open("test6.txt");     //read_file is an instance of ifstream which will open the text file "test6.txt" for reading.
 
​​if(!read_file.is_open())    // condition to check whether the file can be opened or not
 
​​{
cout<<"file could not be opened"<<endl;
​​}
 
​​while(getline(read_file,last))  // using while loop that reads the file line by line, using getline function. The value returned by getline is a reference to the stream object itself, which when evaluated as a boolean expression is true if the stream is ready for more operations, and false if either the end of the file has been reached or if some other error occurred.
 
​​{​
   line_counter=line_counter + 1 ;  //incrementing the line count by 1
 
​​}
 
​​cout<<"The file has "<<line_counter<<" line(s)."<<endl;  //output displayed to user
 
​​read_file.close();  //closing the file stream
 
​​return 0;   // main function is of integer type so returning 0
}  //end of main
// end of program
