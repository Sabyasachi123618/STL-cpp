void doe(Node *root,vector<int> &v1)
{
        if(root == NULL)
        return;
        doe(root->left,v1);
        doe(root->right,v1);
        v1.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> v1;
  doe(root,v1);
  return v1;
}
