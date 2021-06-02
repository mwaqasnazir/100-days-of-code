
#include<iostream>
using namespace std;

main(){
	
	int sum,number,reqNumber;
	sum=0;
	number=1;
	cout<<"Please enter that number till you want to sum: ";
	cin>>reqNumber;
	
	while(number<=reqNumber){
		if(number%2==0)
		sum=sum + number;
		number++;
	}
	
	cout<<"\nThe sum of Even numbers given in Given Range is: "<<sum;
}


