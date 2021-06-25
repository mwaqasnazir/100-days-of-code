#include<iostream>
using namespace std;

int main(){
	
	cout<<"------------BUBBLE SORT------------"<<endl<<endl;
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	
	int arr[size];
	
	for (int i=0; i<size; i++){
		
		cin>> arr[i];
	}

	int counter=1;
	
	while (counter<size){
		for(int i=0; i<size-counter; i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}

	for (int i=0; i<size; i++){
		cout<<arr[i]<< " ";
	}
	
	return 0;
}

/*
OUTPUT

------------BUBBLE SORT------------

Enter the size of array: 5
56 74 12 45 11
11 12 45 56 74

*/


