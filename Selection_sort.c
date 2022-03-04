#include<stdio.h>
int pos(int a[],int n,int start)
{
	int less=a[start],i,pos;
	for(i=start;i<n;i++)
	{
		if(a[i]<less)
		{
			pos=i;
			less=a[i];
		}
	}
	return pos;
}
int main()
{
	int a[20],n,i,j,temp;
	int count=0;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=count;i<n-1;i++)
	{
		int k=pos(a,n,count);
		printf("%d",k);
		temp=a[k];
		a[k]=a[count];
		a[count]=temp;
		count++;
	}
	printf("The required sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
	
