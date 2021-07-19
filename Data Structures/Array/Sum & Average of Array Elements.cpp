#include <iostream>
using namespace std;

int main() {
    
    int n=6;
    	
	int arr[n] = {2, 4, 8, 16, 32, 64};

    int sum = 0;
    int count = 0;
    float average;

    cout << "The numbers are: ";

    for (int i=0; i<n; i++) {	
        cout << arr[i] << "  ";

        sum += arr[i];
        
        ++count;

    }

    cout << "\nTheir Sum = " << sum << endl;

    average = sum / count;
    cout << "Their Average = " << average << endl;

    return 0;
}


