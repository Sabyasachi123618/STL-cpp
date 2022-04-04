queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> st;
    int n=q.size();
    int count=0;
    while(count!=k)
    {
        int data=q.front();
        q.pop();
        st.push(data);
        count++;
    }
    while(!st.empty())
    {
        int data=st.top();
        st.pop();
        q.push(data);
    }
    for(int i=0;i<n-k;i++)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}
