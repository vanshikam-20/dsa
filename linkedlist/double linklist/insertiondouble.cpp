#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << ":memory is free  for data owth value" << val << endl;
    }
};
void printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
// to fnd the length of linkedlist
int lengthofll(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertathead(Node *&head, Node *&tail, int d)
{
    // emptylist
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertattail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertatposition(Node *&tail, Node *&head, int position, int d)
{
    // n positon pe jana hai to n-1 tak traverse karna hai
    // usko temp leke temp ka next=nodetoinsert

    // ye kar dega par head ke liye nahi par payega kyuki hume prevois wala chaiyr hota haina or humne strat hi head se kiya hai
    // isliye pos==1 use
    if (position == 1)
    {
        insertathead(head, tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // this dowm is for last isner as tail i not updated
    // last position
    if (temp->next == NULL)
    {
        insertattail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void deleteanyposition(Node *&head, int position)
{
    // head
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL; // pehele hamesah prevois ko null ehad waal next ko kargea wo hataya
        head = temp->next;       // bring head to 2md node
        temp->next = NULL;       // now  head ke back ko u nmake null

        delete temp;
    }
    else
    {
        // deleting middle or last
        Node *current = head;
        Node *previous = NULL;
        int cnt = 1;
        while (cnt < position)
        { //=
            previous = current;
            current = current->next;
            cnt++;
        }
        current->prev=NULL;
        previous->next=current->next;
        current->next=NULL;
        delete current;
    }
}

int main()
{
    // Node* node1=new Node(23);
    // Node*head=node1;
    // Node*tail=node1;
    Node *head = NULL;
    Node *tail = NULL;
    printll(head);
    // cout<<lengthofll(head);
    insertathead(head, tail, 22);
    printll(head);
    insertattail(tail, head, 11);
    printll(head);
    insertatposition(tail, head, 2, 122);
    printll(head);
    deleteanyposition(head,3);
    cout<<"head is:"<<head->data<<endl;
    cout<<"tail is:"<<tail->data<<endl;
    printll(head);
    return 0;
}