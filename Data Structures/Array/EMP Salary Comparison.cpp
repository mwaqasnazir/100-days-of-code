#include <iostream>
using namespace std;
 
int main(){
	
	int num_Employee= 10;
	int salary[num_Employee], counterA=0,counterB=0,i=0;
	cout << "Enter employee salary (Max 10) " << endl;
	for (i=0; i<num_Employee; i++){
		cout << "Enter employee "<< i+1 <<" salary:  ";
		cin >> salary[i];
	}
 
	for(i=0; i<num_Employee; i++){
		if(salary[i]<3000){
		counterA++;
		} else
		counterB++;
	}
 
	cout << "There are " << counterB << " employee with salary more than 3000" << endl
	<< "There are " << counterA << " employee with salary less than 3000" << endl;
 
	return 0;
}


