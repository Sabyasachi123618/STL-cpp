void doe(Node *root,vector<int> &v1)
{
    if(root==NULL)
    return;
    v1.push_back(root->data);
    doe(root->left,v1);
    doe(root->right,v1);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v1;
  doe(root,v1);
  return v1;
}
