#include<iostream>
using namespace std;

int binarySearch(int n, int arr[], int key){
		
		int start=0;
		int end=n;
		
		while(start<=end){
	
		int mid = (start+end)/2;
		
			if(arr[mid]==key){
				return mid;
			
			}else if(arr[mid]>key){
				end=mid-1;
			}
			else{
				start = mid+1;
			}
		}
		return -1;	
}

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	
	for (int i=0; i<n; i++){
		
		cin>> arr[i];
	}

	int key;
	cout<<"Please Enter The Key that You Want to Search: ";
	cin>>key;
	
	cout<<"Your key is at Index "<< binarySearch(n,arr,key)<<endl;
	
	return 0;
}



