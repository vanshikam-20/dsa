#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
//destructor
    ~Node(){
        int value=this->data;
        //mmery free
        if(this->next!=NULL){
            delete next;
           this-> next=NULL;
        }
cout<<"memry is free for node qwithdata"<<value;
    }
};


void deleteatfirst(int position,Node* &head){
    //deleting firts or start node
    if(position==1){
        Node*temp=head;
        head=head->next;
        //memeory free strat node
        temp->next=NULL;
        delete temp;
    }
    else{
        //for last and middle
        Node*curr=head;
        Node*prev=NULL;
        int cnt=1;
        while (cnt<=position)
        {
            prev=head;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }

}
void printll(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(11);
    cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;
    // Node* node2=new Node(31);
    Node*head=node1;
    Node*tail=node1;
    // printll(head);
    deleteatfirst(2,head);
    printll(head);

    return 0;
}
