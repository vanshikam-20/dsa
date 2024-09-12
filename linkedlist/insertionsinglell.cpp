#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor//
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
void printll(Node *&head)
{
    Node *temp = head; // bcz it starts from head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
//postion or data dena middle ke liye
void insertatposition(Node*&tail,Node*&head,int position,int d){
    //n positon pe jana hai to n-1 tak traverse karna hai
    //usko temp leke temp ka next=nodetoinsert

    //ye kar dega par head ke liye nahi par payega kyuki hume prevois wala chaiyr hota haina or humne strat hi head se kiya hai
    //isliye pos==1 use
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //this dowm is for last isner as tail i not updated
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }

//creating a node for d
Node*nodetoinsert=new Node(d);
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;
}
int main()
{
    // created a new node here;
    Node *node1 = new Node(23);
    cout << node1->data << endl;
    // noew after creating new node head shlould point that new node;
    Node *head = node1;
    Node*tail=node1;
    insertathead(head, 11);
    printll(head);
    insertattail(tail,77);
    printll(head);
    insertatposition(tail,head,1,9);
    printll(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    return 0;
}
