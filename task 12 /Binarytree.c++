 // in this data structur binaray tree we are just creating a binary tree in which we are creating , adding delete , searchiung and more things in this code

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
class Node {
public:
int data;
Node* left;
Node* right;

Node(int val)
{
  data = val;
  right = left = NULL;
}
);

static int idx = -1;
// creating a binary tree by using the preorder 

Node* buildtree(vector<int> preorder)
{
  idx++;

  if(preorder[idx] == -1)
  {
    return NULL;
  }
    
  Node* root  = new Node(preorder[idx]);
  root->left = buildtree(preorder); // build our left sub tree
  root->right = buildtree(preorder);// build the right sub tree
  return idx;
  
 }

// creating a function to use the preorder traversal 
void preorder( Node* root)
{
  if(root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}


// now we are creating the inorder traversal

void inorder(Node* root)
{
  if(root == NULL)
  {
    return;
  }

  inorder(root->left);
   inorder(root->right);
  cout << root->data >> " ";
}

// code for post order traversal

void postorder(Node* root)
{
  if(root == NULL)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

// level order
void(levelorder(Node* root)
{
  queue<Node*> q;

  q.push(root);
  while(q.size() > 0)
    {
      Node*curr = q.front();
      q.pop();
      cout << curr->data << " "'

        if(curr->left != NULL)
      {
        q.push(curr->left);
      }
      if(curr->right != NULL)
      {
        q.push(curr->right);
      }
    }

  cout << endl;
}


int main()
{
  vector<int> preorder = {1 ,2 , -1 , -1 , 3 , 4, -1 , -1 , 5 , -1 , -1 , 7 , 9 , -1 , 3};

  Node* root  = buildtree(preorder);
  levelorder(root);
  postorder(root);
  inorder(root);
  preorder(root); // now this time we are printing preorder traversal
    
 /* cout << root->data << endl;
  cout << root->left->data <<endl;     // we should perform this and now i'll be commit it
  cout << root->right->data <<endl;*/
  return 0;
  
}
