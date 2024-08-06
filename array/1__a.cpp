#include<iostream>
using namespace std;

void input(int arr[],int &n){
	cout<<"Enter the number of elements : ";
	cin>>n;
	cout<<"Enter the element : ";
	for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void display(int arr[],int n){
	cout<<"The Stored values in array is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deletion(int arr[],int n){
	int index;
	cout<<"Enter the index which you want to delete : ";
	cin>>index;
	for(int i=index;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	cout<<"Deletion done successfully"<<endl;
}

int insert(int n, int arr[],int capacity) { 
    int element,index; 
    cout<<"Enter the index were you want to insert : ";
    cin>>index;
    cout<<"Enter the element you want to insert : ";
    cin>>element;
    if(n>=capacity){
    	return -1;
    	cout<<"No space to insert another element"<<endl;
	}
	for(int i=n-1;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	cout<<"insertion done successfully"<<endl;
	return 1;
} 

void search(int arr[],int n){
	int element;
	cout<<"Enter the element you want to search : ";
	cin>>element;
	bool found = false;
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			cout<<"the element was found at "<<i<<endl;
			found=true;
			break;
		}
	}
	if(!found){
		cout<<"element not found"<<endl;
	}
}

void sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[i]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Array sorted"<<endl;
}

void binarySearch(int arr[],int n){
	int lb=0,mid;
	int ub=n-1;
	bool found = false;
	int element;
	cout<<"Enter the element you want to search : ";
	cin>>element;
	while(lb<=ub){
		mid=(lb+ub)/2;
		if(arr[mid]==element){
			cout<<"the Element was found at "<<mid<<endl;
			found =true;
			break;
		}
		if(arr[mid]<element){
			lb=mid+1;
		}
		else{
			ub=mid-1;
		}
	}
	if(!found){
		cout<<"The Element is not found in given array"<<endl;
	}
}

int main(){
	int arr[100],n=0,choice;
	do{
		cout<<"\nMenu:\n";
		cout<<"1. insert a array\n";
		cout<<"2. display array\n";
		cout<<"3. insert element in array\n";
		cout<<"4. Delete element in array\n";
		cout<<"5. linear search for an element\n";
		cout<<"6. sort the array\n";
		cout<<"7. binary search for an element\n";
		cout<<"8. Exit\n";
		cout<<"enter your choice : ";
		cin>>choice;
		switch(choice){
			case 1:
				input(arr,n);
				break;
			case 2:
				display(arr,n);
				break;
			case 3:
				insert(n,arr,100);
				n+=1;
				display(arr,n);
				break;
			case 4:
				deletion(arr,n);
				n-=1;
				display(arr,n);
				break;
			case 5:
				search(arr,n);
				display(arr,n);
				break;
			case 6:
				sort(arr,n);
				display(arr,n);
				break;
			case 7:
				sort(arr,n);
				binarySearch(arr,n);
				break;
			case 8:
				cout<<"exiting program."<<endl;
				break;
			default:
				cout<<"Invalid choice please try again!\n";
		}
	}while(choice!=8);
	return 0;
}
