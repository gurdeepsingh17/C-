#include <iostream>
using namespace std;
 
// Function to print the alphabet
// in lower case
void lowercaseAlphabets(int c)
{
   // lowercase
 
   for ( c = 97; c <=122; ++c)
       cout << char(c) << " ";
 
   cout << endl;
}
// Function to print the alphabet
// in upper case
void uppercaseAlphabets(int c)
{
 
   // uppercase
   for (c = 65; c <= 90; ++c)
       cout << char(c) << " ";
 
   cout << endl;
}
 
// Driver code
int main(int argc , char* argv[])
{
for(int i=0; i<argc ; i++)
cout<<argv[i]<<endl;
int ch=65;
string argv1=argv[1];
string argv2=argv[2];
string argv3=argv[3];
if(argv1=="capital" && argv2=="case" && argv3=="letter" )
{
uppercaseAlphabets(ch);
}
else if (argv1=="lower" && argv2=="case" && argv3=="letter")
{
lowercaseAlphabets(ch);
}
 
   return 0;
}
