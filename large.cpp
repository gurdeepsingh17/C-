/*
 * array.cpp
 *
 *  Created on: Aug 8, 2019
 *      Author: Gurdeep Singh
 */
#include <iostream>   //header file included to allow program to perform input and output
using namespace std;  //cout, cin defined inside std namespace

int main() {   //main function begins

int a[6] , first_largest ,second_largest,third_largest ;  //array of integer data type and variables of integer data type are declared

	first_largest =0;     // initialising the variable to zero
	second_largest=0;     //initialising the variable to zero
	third_largest=0;      //initialising the variable to zero

	cout<<"enter the values in an array";  //prompts user to input values in array

for(int i=0;i<6;i++)             //using for loop for array
	{
		cin>>a[i];      //user inputs array elements
	}

	cout<<"values in array entered are:";    //loop for displaying array elements

for (int i=0;i<6;i++)
			{
				cout<<a[i]<<" ";      //array is displayed
			}
			for(int i=0;i<6;i++)          //loop applied for array elements
			{
			if(a[i]>first_largest)   //if condition to find the first largest element in the array
				{
				third_largest= second_largest;    //swapping the elements
				second_largest = first_largest;    //swapping the elements
				first_largest = a[i] ;//storing the first largest array element
				}
				else if(a[i]>second_largest)   //if condition to find the second largest element in the array
				{
				third_largest=second_largest ;     //swapping the elements
				second_largest=a[i];     //storing the second largest array element
			}
				else if(a[i]>third_largest)  //if condition to find the third largest element in the array
				{
					third_largest=a[i];    //storing the third largest array element
				}
}
               cout<<"\nthe three largest elements in an array are:"<<first_largest<<" "<<second_largest<<" "<<third_largest<<" "<<endl; //three largest array elements are displayed

	return 0;

}

