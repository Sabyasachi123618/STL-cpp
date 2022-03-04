#include<stdio.h>
#define max 6
int queue[20],front=-1,rear=-1;
void enqueue(int val)
{
	if(rear==max-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		if(front=-1)
		{
			rear++;
			front++;
		}
		else
		{
			rear++;
		}
		queue[rear]=val;
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty.Nothing to dequeue\n");
	}
	else
	{
		printf("Item %d is dequeued:\n",queue[front]);
		front++;
	}
}
void show()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
}
void length()
{
	int count=0,i;
	for(i=front;i<=rear;i++)
	{
		count++;
	}
	printf("%d",count);
	
}
int main()
{
	int ch,ele;
	do
	{
		printf("1.ENQUEUE\n2.DEQUEUE\n3.SHOW\n4.LENGTH\n5.EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value to be inserted:");
				scanf("%d",&ele);
				enqueue(ele);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				show();
				break;
			case 4:
				length();
				break;
			default:
				printf("Invalid option\n");
		}
	}while(ch!=5);
	return 0;
}
