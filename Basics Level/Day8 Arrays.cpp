/*
 -----------------------Arrays----------------------
 --- Practicing PF Concepts in CPP--------------
 --- Date: 23.12.2020---------------------------------
 Author: Muhammad Waqas Nazir, 2nd Year CS student ,CS Dept. VU
 ------------------------------------------------------
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



--------------------------------

*/
