
#include <iostream> 
using namespace std; 

template <class T> //template <typename T> this is also true 
T checkMax(T x, T y) 
{ 
	cin>> x >> y;
	cout<<"The Maximum Value is: ";
    return (x > y) ? x : y; // here i am using Ternary Operator instead of if
} 
  
int main() 
{ 

  int n1,n2;
 	 cout<<"Enter integer values: ";
    // Calling checkMax for int 
    cout << checkMax<int>(n1, n2) << endl; 
  
  cout<<"Enter float values: ";
  float f1,f2;
    // Calling checkMax for double 
    cout << checkMax(f1, f2) << endl; 
  
  cout<<"Enter character values: ";
  char a,b;
    // Calling checkMax for char 
    cout << checkMax(a, b) << endl; 
  
    return 0; 
} 


/*
Output



--------------------------------

*/

