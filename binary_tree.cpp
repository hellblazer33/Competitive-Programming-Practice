#include <iostream>

using namespace std;

int main(){
  struct node{
     int data;
     struct node *left ;
     struct node *right ;
  }

  struct Node* newNode(int data){
      struct node* node  = (struct node*)malloc(sizeof(struct node));

      node->data = data;

      node->left = NULL;
      node->right = NULL;
      return(node);

  }

  struct node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4)
  root->left->right = newNode(5);
  getchar();
  return 0;
}
