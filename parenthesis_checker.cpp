class Solution {
public:
    bool isValid(string s) {
        stack<char> k;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' or s[i]=='{' or s[i]=='[')    //if parenthesis is an open one then push it into the stack
                k.push(s[i]);
            else if(k.empty())                          //if the stack is empty return false
                return false;
            else
                if((k.top()=='(' and s[i]==')') or (k.top()=='{' and s[i]=='}') or (k.top()=='[' and s[i]==']')) 
                    k.pop();
            else
                return false;
        }
        return k.empty(); //after popping elements return true if stack is empty
    }
};
