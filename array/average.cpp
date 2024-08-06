#include<iostream>
using namespace std;
int main(){
	int n,average;
	float sum=0;
	cout<<"enter size";
	cin>>n;
	int arr[5]={ };
	cout<<"enter array elements";
	for(int i=0;i<n;i++) cin>>arr[i];
 for(int i=0;i<n;i++){
		sum+=arr[i];
		average=sum/n;
	}
	cout<<"average is"<<average;
	return 0;
}
