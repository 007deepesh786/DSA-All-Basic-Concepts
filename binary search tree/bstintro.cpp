// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//    public:
//    int data;
//    Node*left;
//    Node*right;

//    Node(int d){
//     this->data = d;
//     this->right = NULL;
//     this->left = NULL;
//    }
// };
// void inorder(Node*root){
//     if(root == NULL){
//         return;
//     }

//     inorder(root -> left);
//     cout << root -> data <<" ";
  
//     inorder(root -> right);
// }
// void preorder(Node*root){
//     if(root == NULL){
//         return;
//     }

    
//     cout << root -> data <<" ";
//     preorder(root -> left);
//     preorder(root -> right);
// }
// void postorder(Node*root){
//     if(root == NULL){
//         return;
//     }

//    postorder(root -> left);
//    postorder(root -> right);
//    cout << root -> data <<" ";
  
// }
// void levelordertraversal(Node*root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);   // putting saperator;

//     while(!q.empty()){
//         Node*temp = q.front();
   
//         q.pop();

//         if(temp == NULL){ // purana level complete traverse ho chuka hai
//             cout << endl;
//             if(!q.empty()){  // fir bhi agar queue me koi element rah gaya hai
//                 q.push(NULL);
//             }
//         }
//         else{ 
//             cout << temp -> data <<" ";
//              if(temp -> left){
//             q.push(temp -> left);
//              }
//         if(temp -> right){
//              q.push(temp -> right);
//              }
//         }
      
//     }
// }
// Node* insertintobst(Node*root , int d){
//     // base case
//     if(root == NULL){
//        root = new Node(d);
//        return root;
//     }
//     if(d > root->data){
//         root->right = insertintobst(root->right , d);
//     }
//     else{
//         root->left = insertintobst(root->left , d);
//     }
//    return root;
// }
// void takeinput(Node*&root){
//            int data;
//            cin >> data;

//            while(data != -1){
//            root =  insertintobst(root , data);
//             cin >> data;
//            }
// }


// int main(){
//     Node*root = NULL;

//     cout << "take input data to create BST"<< endl;
//     takeinput(root);
//     cout << "print bst" << endl;
//     levelordertraversal(root);

//     cout << "printing inorder traversal " << endl;
//     inorder(root);
//     cout << endl;

//     cout << "printing preorder traversal " << endl;
//     preorder(root);

//     cout << endl;

//     cout  << "printing postorder traversal " << endl;
//     postorder(root);
    
//     return 0;
// }