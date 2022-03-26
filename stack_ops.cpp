#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s1;
	s1.push(10);//push operation
	s1.push(20);
	s1.push(30);
	s1.push(40);
	cout<<s1.empty()<<"\n";//checking if stack is empty or not
	cout<<s1.top()<<"\n";//returns the top element of the stack
	s1.pop();
	cout<<s1.top()<<"\n";
	cout<<s1.size()<<"\n";//returns the stack size
}
