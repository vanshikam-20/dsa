//#include<iostream>
//using namespace std;
//int binarysearch(int arr[], int n, int element){
//    int low, mid, hihg;
//    low=0;
//    hihg = n-1;
//    //keep seraching iuntil low <= hihg
//    while(low<=hihg)
//    {
//        mid = (low + hihg)/2;
//        if(arr[mid] == element)
//        {
//            return mid;
//        }
//    if(arr[mid]<element)
//    {
//        low = mid+1;
//    }
//    else
//    {
//        hihg = mid -1;
//    }
//}
//    return -1;
// }
//int main(){
//	int n;
//	cout<<"enter size of array"	<<endl;
//	cin>>n;
//	int arr[10]={ };
//	for(int i=0;i<n;i++) cin>>arr[i];
//	cout<<"enter elemts";
//	int element ;
//	cout<<"enter the element u wan to serach"<<endl;
//	cin>>element;
//    int searchindex = binarysearch(arr, n, element);
//    cout<<"the element"<<element<<" was founds at index:"<<searchindex;
//    return 0;
//}

// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Driver code
int main(void)
{
	int n;
    int arr[78] = { };
    cout<<"enter size";
    cin>>n;
    cout<<"entre elemets";
    for (int i=0;i<n;i++) cin>>arr[i];
    int x ;
    cout<<"enter elmenet to serach";
    cin>>x;
    
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}

