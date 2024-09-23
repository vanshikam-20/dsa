#include<iostream>
#include<vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    // Constructor with both data and next node
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    // Constructor with only data (assuming next is initially null)
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node* convertit(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover =head;
    for (int i = 1; i < arr.size(); i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;   
}
int length(Node*head){
    int counter=0;
    Node*temp=head;
    while(temp){
        temp=temp->next;
        counter++;
    }
    return counter;
}
int checkifthere(Node*head,int val){
    Node*temp=head;
    while(temp){
        if(temp->data==val)
        return 1;
        // cout<<val<<"is present";
        temp=temp->next;
    }
    return 0;
    // cout<<val<<"no present";
}
int main(){
    vector<int>arr={12,45,67,8,45,45,67,8};
    Node*head=convertit(arr);
    // cout<<length(head);
    // cout<<checkifthere(head,0);
}