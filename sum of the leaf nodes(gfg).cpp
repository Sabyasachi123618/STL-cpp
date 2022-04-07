void process(Node *root,int &sum)
{
    if(root==NULL)
    return;
    if(root->left==NULL and root->right==NULL)
    sum=sum+(root->data);
    process(root->left,sum);
    process(root->right,sum);
}
int sumLeaf(Node* root)
{
    // Code here
    int sum=0;
    process(root,sum);
    return sum;
}
