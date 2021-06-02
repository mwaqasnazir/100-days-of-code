
#include<iostream>
using namespace std;

main(){
	
	int number,factorial;
	number=0;
	factorial=1;
	cout<<"Please enter that number whose factorial you want to calculate : ";
	cin>>number;
	
	while(number>=1){
		factorial=factorial * number;
		number = number-1;
	}
	
	cout<<"\nThe factorial of given number is: "<<factorial;
}


