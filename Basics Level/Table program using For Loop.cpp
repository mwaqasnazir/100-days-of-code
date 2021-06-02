
#include<iostream>
using namespace std;

main(){
	int TableNumber, table;
	
	
	cout<<"Enter the Number of which you want to read or check:";
	cin>>TableNumber;

	for(table=1; table<=10; table ++){
		
		cout<<"\n" <<TableNumber << " X " << table << " = " << TableNumber*table <<"\n";
	}

	
}


