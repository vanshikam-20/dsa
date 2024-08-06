#include<iostream>
using namespace std;
int main(){
int	arr[6]={23,45,111,8,12,99};
	int length=sizeof(arr)/sizeof(arr[0]);
	int min = arr[0];
	for(int i=0; i<length;i++){
//		only arrow change
		if(arr[i]>min)
		min = arr[i];
	}
	cout<<endl<<"minimum is"<<min;
	return 0;
}

