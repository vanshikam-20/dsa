#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for value"<<value<<endl;
    }
};
//circular me head ke zarurta nahi hai::tail use kran hai last and first node qaccess karne ke liye
//first node access karni hai to tail ka next
//circular hai to bata nhi saktre kaha start kaha end
//data mile to new node dal dena
//comapre karke lagane hai agye piche
void insertnode(Node*&tail,int element,int d){
//assumoing that the lement is presnt in th elist
//forward mtlb curr ka next in acircular way
if(tail==NULL){
    Node*newNode=new Node(d);
    tail=newNode;
    newNode->next=newNode;

}
else{
    //non empty list
        Node*curr=tail;//now sesrch
        while(curr->data!=element){
            curr=curr->next;
        }
        //out of loop elemenet fpouund; and current is om it->
        //1.node create
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
}
}
void print(Node* &tail){
    Node*temp=tail;
    if(tail==NULL){
        cout<<"empty";
        return;
    }
    do{
        cout<<tail->data<<"  ";
        tail=tail->next;

    } while(tail!=temp);
    cout<<endl;
}
void deletenode(Node*&tail,int value){
    //value leke delte karna hai
    //empty le deletion
    if(tail==NULL){
        cout<<"list is empty";
    }
    else{
        //non mepty assuming that is presnt in list
        Node*prev=tail;
        Node*curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;//pointer htane ke liye
    //1 node ll
    if(curr==prev){
        tail=NULL;
    }
    //segmentaion fault ara tha tail updated nahi tha

    if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
    }
}

int main(){
    // Node*node1=new Node(34);
    //empty list me kar rhe hia not amattter
    Node*tail=NULL;
    // insertnode(tail,4,3);
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,5);
    print(tail);
    // insertnode(tail,5,8);
    // print(tail);
    // insertnode(tail,8,15);
    // print(tail);
    //ek hinode ko kasie handele
    deletenode(tail,3);
    print(tail);
    return 0;
}
