/*
 ----------------------- Arrays ------------------------------
 ------------------ #100daysofcode Day-3 ---------------------
 ------------------ Date: 12 JAN,2020--------------------------
 Author: Muhammad Waqas Nazir, 2nd Year CS student ,CS Dept. VU
 ------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main (void){
	
	int students[5]={10,10,10,10,10}; //decleration and defination at a time with elements/values of array with its size
	cout<<students[1]<<endl;
	
	int age[4]={0}; // Decleration,Defination & Initialization of array with all its elements set to be zero; 
					// Note if we initilize like this int age[4]={1} it means that array 0 index has been set to value of 1 and all of other are o ;
	
	int students2[5]; //Decleration of array with its size
	students2[0]=00;
	students2[1]=01;  // Assigning a value to array index 1 is the idenx of array and 01 is the element/value which is stored in the index 1 
	students2[2]=02;
	students2[3]=03;
	students2[4]=04;
	cout<<students2[1];
}


/*
Output



--------------------------------

*/
