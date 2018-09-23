Node* LCA(Node *root, int n1, int n2)
{
  //if root is  null means element not found so return null
   if(root==NULL)
    return NULL;
  //if any of the element is found by root return that element because
  //even if other element is found or not found in both the case found element is lca
    if(root->data==n1 || root->data==n2)
    return root;
  //calls for left
   Node* a=LCA(root->left,n1,n2);
   //calls for right
   Node * b=LCA(root->right,n1,n2);
   //if element is found in both than root is the lca
    if(a!=NULL && b!=NULL)
    return root;
  //if found in any 1 than that is our root
    if(a!=NULL)
    return a;
    if(b!=NULL)
    return b;
   
}