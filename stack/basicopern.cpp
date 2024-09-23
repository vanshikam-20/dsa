#include<iostream>
#include<stack>
using namespace std;
//top index where i want top push initaly -1 1st element dalo 2nd dalo next next FOR SPACE
//int size
class Stack{
    //2 ways arrays linkedlist ti implement
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"STACK OVEFFLOW";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
          cout<<  "stack udnerflow";
        }

    }
    int peek(){
        //top elmenet
        if(top>=0 && top<size){
            return arr[top];
        }
            else{
                cout<<"stack empty";
                return -1;
            }
        
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
//push me sabse pehele check space yes no 1 elemenet -1 se 0
//pop me elemenet presnt yes no underflow ho jayega 0 se -1 agaain -- decremnet
//how to chwck elmenet hai ya nahi TOP>=0 hoga jab  -1 then empty
using namespace std;
int main (){
    // stack<int> s;
    // s.push(2);
    // s.push(34);
    // s.pop();
    // cout<<"PRINTING TOP ELEMENT"<<s.top()<<endl;
    // if(s.empty()){
    //     cout<<"EMPTY";
    // }
    // else{
    //     cout<<"NOT EMPTY;";
    // }
    Stack st(5);
    st.push(22);
    st.push(44);
    st.push(12);
        st.push(44);
    st.push(44);
    st.push(44);
    st.push(44);
    st.push(44);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
}