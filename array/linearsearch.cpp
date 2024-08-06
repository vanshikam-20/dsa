#include<iostream>
using namespace std;

	int search(int ar[],int n,int x){
			for (int i=0;i<n;i++)
				if(ar[i]==x)
					return i;
				return -1;
		
	}
	
	int main(void){
		int num ;
 	int size;
 	int ar[6]={0};
 	cout<<"enter the size of arr";
 	cin>>size;
	cout<<"enter elemets "<<endl;
		for(int i=0;i<size;i++){
				cin>>ar[i];
			}
		int x;
		cout<<"enter find ";
		cin>>x;
		int n=sizeof(ar)/sizeof(ar[0]);
		int result=search(ar,n,x);
		if(result==-1)
		{
		cout<<"element is not there in the arrray";
	}
	else
	{
		cout<<"element is there at index "<<result;
	}
		return 0;
		
	}
	
	
	
	
//	int main(void){
////		int ar[]={3,90,7,87,56,45,9,0};
//	int size=4;
//	int nos[size];
//			for(int i=0;i<size;i++){
//				cout<<"enter numbers";
//				cin>>nos[i];
//			}
//		int x;
//		cout<<"enter the element u want to srch";
//		cin>>x;
//		int n=sizeof(nos)/sizeof(nos[0]);
//		int result=search(nos,n,x);
//		
//		if(result==-1){
//		cout<<"element is not there in the arrray";
//	}
//	else{
//		cout<<"element is there at index "<<result;
//	}
//		return 0;
//		
//	}
//	
