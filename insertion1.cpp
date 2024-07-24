
#include <iostream> 
using namespace std; 
int* insertX(int n, int arr[],int x, int pos) 
{ 
	int i; 
	// increase the size by 1 
	n++; 
	// shift elements forward 
	for (i = n; i >= pos; i--) 
		arr[i] = arr[i - 1]; 

	// insert x at pos 
	arr[pos - 1] = x; 

	return arr; 
} 

int main() 
{ 
	
	int arr[8] = {  }; 
	int i,n, x, pos; 
	cout<<"enter size";
	cin>>n;
	cout<<"enter the elemnets of arr";
	for(int i=0;i<n;i++) cin>>arr[i];
	// print the original array 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 

	cout<<"enter the element to isnert";
	cin>>x;
	cout<<"enter the position wher to enter";
	cin>>pos;
	insertX(n, arr, x, pos); 

	// print the updated array 
	for (i = 0; i < n + 1; i++) 
		cout << arr[i] << " "; 
	cout << endl; 

	return 0; 
} 

