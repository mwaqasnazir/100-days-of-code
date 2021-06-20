/*
 -----------------------Arrays Operations ----------------------
 -------------------------- Traverse ---------------------------
 ------------------ #100daysofcode Day-3 -----------------------
 ------------------ Date: 13 JAN,2020--------------------------
 Author: Muhammad Waqas Nazir, 2nd Year CS student ,CS Dept. VU
 ---------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main (void){
	int a;
	cout<<"Enter The Number of Class Students ";
	cin>>a;
	int students[a];
	
	for (int i=1; i<a+1; i++){
		
		cout<<"Age of Studnent "<<i << " :";
		cin>>students[i];
	}
	
	for (int i=1; i<a+1; i++){
		
		cout<<"Age of Studnent "<<i << " is :" <<students[i]<< endl;
	}	
}
/*
Output

Age of Studnent 1 is :2
Age of Studnent 2 is :32
Age of Studnent 3 is :12
Age of Studnent 4 is :23
Age of Studnent 5 is :45
--------------------------------
*/
