#include<bits/stdc++.h>
using namespace std;
bool compare(int x,int y)//function used while sorting in descending order
{
	return (x>y);
}
void print_loop(vector<int> v)//printing the elements based on indexing
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}
void print_itr(vector<int> v) //printing  the elements using the iterator
{
	vector<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<"\n";
}
int main()
{
	vector<int> v;
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		v.push_back(x); //pushing into vector
	}
	print_itr(v);
	v.insert(v.begin()+1,2,8); //inserting into vector
	print_itr(v);
	sort(v.begin(),v.end()); //sorting a vector
	print_itr(v);
	sort(v.begin(),v.end(),compare);//sorting the vector into ascending order
	print_itr(v);
	reverse(v.begin(),v.end());//reversing a vector
	print_itr(v);
	v.erase(v.begin()+1,v.begin()+2);//erasing elements of the vector
	print_itr(v);
	v.pop_back();//popping from the back
	print_itr(v);
	v.clear();//clearing the whole vector
	print_itr(v);
}
