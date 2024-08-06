#include <iostream>
using namespace std;
int main(){

int arr[4]={1,3,5,6};
cout<<"numbers are"<<endl;
 for(int i=0;i<4;++i){
cout<< arr[i]<< endl;	
}
cout<<"maximum element is"<<endl;
arr.max();
return 0;
}

