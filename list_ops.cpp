#include<bits/stdc++.h>
using namespace std;
void display(list<int> list1)   //printing the elements through iterator
{
	list<int>::iterator itr;
	for(itr=list1.begin();itr!=list1.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
}
int main()
{
	list<int> list1;
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		list1.push_back(x);
	}
	display(list1);
	list1.push_front(100);//push into front
	display(list1);
	list1.pop_back();//pop from back
	display(list1);
	list1.pop_front();//pop from front
	display(list1);
	list1.sort();//sorting the list
	display(list1);
	list1.reverse();//reversing the list
	display(list1);
	list<int> list2=list1;
	list1.merge(list2);//merging the list
	display(list1);
}
