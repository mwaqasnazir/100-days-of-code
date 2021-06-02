
#include<iostream>
using namespace std;

main(){
	int sum, number,limitOfNumber;
	sum=0;
	number=1;
	
	cout<<"Please Enter the Integer value that you have to Sum:";
	cin>>limitOfNumber;
	
	
	while(number<=limitOfNumber)
	{
		
		if(number % 2 == 0)
		{
			sum= sum + number;
		}
		number = number + 1;
	} 
	cout<<"The Sum of All even Integers between 1 and "<<limitOfNumber <<" is equal to: "<<sum ; 
			
}



