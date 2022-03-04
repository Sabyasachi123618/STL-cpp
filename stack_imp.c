#include<stdio.h>
#define max 5
int stack[20],top=-1;
void push()
{
	int ele;
	if(top==max-1)
	{
		printf("Stack overflow\n");
	}
	else
	{
		printf("Enter the element to be inserted:");
		scanf("%d",&ele);
		top=top+1;
		stack[top]=ele;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack underflow\n");
	}
	else{
		printf("Element %d popped out from stack",stack[top]);
		top=top-1;
	}
}
void show()
{
	if(top==-1)
	{
		printf("Stack underflow.Nothing to show\n");
	}
	else
	{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	int ch;
	do
	{
		printf("1.PUSH\n2.POP\n3.SHOW\n4.EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			default:
				printf("Invalid choice");
		}
	}while(ch!=4);
}
