#include<iostream>
using namespace std;
class Node{
    public:
int data;
    Node*next;
    Node(int d){
        this -> data =d;
        this -> next =NULL;
    }

};
void insertathead(Node*&head,int d){
    Node*temp =new Node(d);
    temp -> next = head;
    head = temp;
}
void insertattail(Node*&tail,int d){
    Node*temp =new Node(d);
    tail -> next = temp;
    tail = tail -> next;

}
void movetofront(Node*head){
    int count=0;
    Node*temp = head;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }

    temp->next=head;
   int lastnode = count;

   while(count-1){
      temp=temp->next;
   }
   temp->next=NULL;


}
void print(Node* &head){
  Node*temp=head;
  while(temp!=NULL){
    cout << temp->data <<" ";
    temp = temp -> next;
  }
  cout << endl;
}

int main(){
    Node*node1=new Node(10);

     Node*head=node1;
     insertathead(head,1);
     insertathead(head,2);
     insertathead(head,3);
     insertathead(head,4);
     insertathead(head,5);
     movetofront(head);
     print(head);

     return 0;
}