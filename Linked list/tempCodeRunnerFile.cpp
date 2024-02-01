void print(Node* &head){
  Node*temp=head;
  while(temp!=NULL){
    cout << temp->node <<" ";
    temp = temp -> next;
  }
  cout << endl;
}