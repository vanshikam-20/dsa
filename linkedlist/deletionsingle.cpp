//1st node ke liye hamesha alag se karna padega bcz no prevois
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;//this == current object
        if(this->next!=NULL){
            delete next;
            this->next=NULL;

        }
        cout<<"free for "<<value<<endl;
    }
};
void insertathead(Node *&head, int d)
{
    // here i took it as refernce  head as i didint wan to cretae another one[COPY] and i wanted top make chnages in the original one itself
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertattail(Node* &tail,int d){
    //temp aka new node create;
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void deleteanyposition(Node*&head,int position){
    //head
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        //deleting middle or last
        Node*current=head;
        Node*previous=NULL;
        int cnt=1;
        while(cnt<position){//=
            previous=current;
            current=current->next;
            cnt++;
        }
        previous->next=current->next;
        current->next=NULL;
        delete current;
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
    // cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;
    // Node* node2=new Node(31);
    Node*head=node1;
    Node*tail=node1;
    // printll(head);
    printll(head);
    insertathead(head,22);
    printll(head);
    insertattail(tail,34);
    printll(head);
    deleteanyposition(head,2);
    printll(head);

    return 0;
}
