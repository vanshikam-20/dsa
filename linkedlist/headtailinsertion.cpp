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
int main()
{
    // created a new node here;
    Node *node1 = new Node(23);
    cout << node1->data << endl;
    // cout<<node1->next<<endl;
    // noew after creating new node head shlould point that new node;
    Node *head = node1;
    Node*tail=node1;
    insertathead(head, 11);
    insertattail(tail,44);
    printll(head);
    insertathead(head, 56);
    insertattail(tail,77);
    printll(head);
    return 0;
}