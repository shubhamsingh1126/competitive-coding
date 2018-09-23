/*brute force-for every element call for its left and right calculate their sum recursively and compare whether their sum is equal to root
in following code we have assume that consider root having left and right
if root has no leaf than sum=root itself
if root is null sum will be 0
if root is not leaf than sum will be 2*left sum if we assume left to be sum tree than 2*root->Data. same for right
and than we compare from leaf and go to top if at any point,condition fails we return false
*/

bool isleaf(Node *root)
{
    if(root->left ==NULL && root->right==NULL)
    return true;
    else
    return false;
}
bool isSumTree(Node* root)
{
     // Your code here
     if(root==NULL ||isleaf(root))
     return true;
     int sumleft;
     int sumright;
     if(root->left!=NULL && root->right!=NULL)
     {
     if(root->left==NULL)
     sumleft=0;
     if(isleaf(root->left))
     sumleft=root->left->data;
     else
     sumleft=2*(root->left->data);
     if(root->right==NULL)
     sumright=0;
     if(isleaf(root->right))
     sumright=root->right->data;
     else
     sumright=2*(root->right->data);
     return root->data==sumleft+sumright && isSumTree(root->left ) &&isSumTree(root->right);
}
}