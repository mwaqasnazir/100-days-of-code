#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	
	for (int i=0; i<n; i++){
		
		cin>> arr[i];
	}
	
	for (int i=0; i<n; i++){
		
		cout<<"The value of Index "<<i+1<<" is "<<arr[i]<<endl;
	}
	
	return 0;
}


