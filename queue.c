#include<stdio.h>
int queue[5],f=-1,r=-1;
void enqueue();
void dequeue();
void display();
void main()
{
	int ch;
	printf("1.enqueue\n");
	printf("2.Dequeue\n");
	printf("3.Display\n");
	printf("4.exit\n");
	while(1)
	{
		printf("\nEnter choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case4: exit(0);
			break;
			default:printf("invalid option :");
		}
	}
}
void enqueue()
{
	int item;
	if(r==5-1)
	{
		printf("Queue is full ");
	}
	else
	{
		if(f==-1)
		{
			f=0;
		}
		printf("insert element in queue :");
		scanf("%d",&item);
		r=r+1;
		queue[r]=item;
	}
}
void dequeue()
{
	if(f==-1)
	{
		printf("Queue is empty ");
	}
	else
	{
		printf("Deleted %d",queue[f]);
		f=f+1;
	}
}
void display()
{
	int i;
	if(f==-1)
	{
		printf("Queue is empty ");
	}
	else
	{
		printf("Queue Element :");
		for(i=f;i<=r;i++)
		{
			printf("%d",queue[i]);
		}
	}
}
