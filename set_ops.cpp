#include<bits/stdc++.h>
using namespace std;
void display(set<int> s)
{
	set<int>::iterator i;
	for(i=s.begin();i!=s.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
}
int main()
{
	set<int> s;
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	display(s);
	s.insert(s.begin(),10);
	if(s.find(10)!=s.end())
	cout<<"Consition matched"<<endl;
	display(s);
}
