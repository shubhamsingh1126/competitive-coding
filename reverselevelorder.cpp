void reversePrint(Node *root)
{
    //Your code here
    vector<Node*>v;
    v.push_back(root);
Node *temp=root;
int count=0;
while(1)
{
   temp=v[count];
   count++;
   if(temp->right)
   v.push_back(temp->right);
   if(temp->left)
   v.push_back(temp->left);
   if(count==v.size())
   break;
   
}
for(int i=v.size()-1;i>=0;i--)
{
    cout<<v[i]->data<<" ";
}
}
/*first we have created a vector
we have traversed the tree in root than right and than left and in this process we have stored them in vectors
purpose of count is for terminating from the while 
vector will be filled double the no of elements already in it.and at one time they will be equal too
and temp=v[count] isliye taaki ab kisko root bana k agla process karna hai isliye hai
count hume yehi bata rha next kon sa process hoga
as we know count is incremented everytime we go in while loop,and as the element is inserted either from left or right at max 