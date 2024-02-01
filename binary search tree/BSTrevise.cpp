#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
   int data;
   Node*left;
   Node*right;

   Node (int d){
      this->data = d;
      this -> left = NULL;
      this ->right = NULL;
   }
};
void inorder(Node*root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data <<" ";
  
    inorder(root -> right);
}
void postorder(Node*root){
    if(root == NULL){
        return;
    }

   postorder(root -> left);
   postorder(root -> right);
   cout << root -> data <<" ";
  
}
void preorder(Node*root){
    if(root == NULL){
        return;
    }

    cout << root -> data <<" ";
    preorder(root -> left);
    preorder(root -> right);
}
void levelorder(Node* &root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*front = q.front();
        q.pop();

        if(front == NULL){
            cout << endl;
            if(!q.empty()){
            q.push(NULL);
          }
        }

        else{
            cout << front->data << " ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }

    }
}
Node* insertintobst(Node*root , int d){
    // base case
    if(root == NULL){
       root = new Node(d);
       return root;
    }
    if(d > root->data){
        root->right = insertintobst(root->right , d);
    }
    else{
        root->left = insertintobst(root->left , d);
    }
   return root;
}
void takeinput(Node*&root){
           int data;
           cin >> data;

           while(data != -1){
           root =  insertintobst(root , data);
            cin >> data;
           }
}

// deletion in bst

Node* minval(Node *root){
         Node* temp = root;
         while(temp->left != NULL){
             temp = temp->left;
         }
         return temp;
     }
    Node* deleteNode(Node* root, int key) {
        if(root == NULL){
            return NULL;
        }
        
        if(root->data == key){
            //  4 cases 
            // 1st :- 0 child nodes 
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            //  2nd :-> there are 1 child nodes(left)

            if(root -> left != NULL && root->right == NULL){
                Node*temp = root->left;
                delete root;
                return temp;
            }
            //  3rd :-> there are 1 child nodes(right)

            if(root -> right != NULL && root->left == NULL){
                Node*temp = root->right;
                delete root;
                return temp;
            }

            // 4th :-> there are two child nodes (right && left)

            if(root->left != NULL && root->right != NULL){
                int mini = minval(root->right)->data;
                root->data = mini;
                root->right = deleteNode(root->right,mini);
                return root;
            }

        }
        else if(root->data > key){
            root->left = deleteNode(root->left,key);
            return root;
        }
        else{
            root->right = deleteNode(root->right,key);
            return root;
        }
        return root;
    }

int main(){
    Node* root = NULL;

    cout << "enter data to create data for BST" << endl;
    takeinput(root);

    cout << "Print preorder traversal" << endl;
    preorder(root);
    cout << endl;
    cout << "Print levelorder traversal" << endl;
    levelorder(root);
   

    return 0;
}