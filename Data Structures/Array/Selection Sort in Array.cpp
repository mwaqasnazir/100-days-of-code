#include<iostream>
using namespace std;

int main(){
		cout<<"------------SELECTION SORT------------"<<endl<<endl;

	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	
	for (int i=0; i<n; i++){
		
		cin>> arr[i];
	}

	for (int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[i]){
				
				int temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for (int i=0; i<n; i++){
		cout<<arr[i]<< " ";
	}
	
	return 0;
}

/*
OUTPUT

------------SELECTION SORT------------

Enter the size of array: 6
23 43 12 34 54 10
10 12 23 34 43 54

*/




