
#include <iostream>
using namespace std;

template<class K>
K show(K n1, K n2){
	cout<<"Enter The First Number: ";
	cin>>n1;
	
	cout<<"Enter The 2nd Number: ";
	cin>>n2;
	
	cout<<"\nThe Sum of Both Numbers is: "<< n1 + n2<<endl;
	cin>>n1;
}

int main (void){
	char a,b;

	show(a,b);
}





/*
Output



--------------------------------

*/
