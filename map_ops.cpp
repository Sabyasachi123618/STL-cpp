#include<bits/stdc++.h>
using namespace std;
void display(map<string,int>m1) //printing using iterator
{
	map<string,int>::iterator itr;
	for(itr=m1.begin();itr!=m1.end();itr++)
	{
		cout<<itr->first<<" "<<itr->second<<" ";
	}
}
int main()
{
	map<string,int>m1;
	
	m1["somu"]=1;   //insertion operation
	m1["mona"]=2;
	m1["kalo"]=3;
	m1["arnab"]=3;
	display(m1);
	if(m1.find("argha")==m1.end())
	cout<<"Not found in the map";
}
