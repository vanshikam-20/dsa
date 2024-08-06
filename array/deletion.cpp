#include<iostream>
using namespace std;
int main()
{
	int n,i, elem, j, found=0;
	int arr[27]={ };
	cout<<"enter size";
	cin>>n;
	cout<<"enter the elemnets of arr";
	for(int i=0;i<n;i++) cin>>arr[i];  
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<n; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<"\nElement not found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    for (i = 0; i < n ; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
    return 0;
}
