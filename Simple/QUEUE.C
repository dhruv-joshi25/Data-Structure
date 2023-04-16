#include<stdio.h>
#include<conio.h>
#define size 10

int front=-1;
int rear=-1;
int q[size];

void insert();
void update();
void del();
void display();


void main()
{
	int ch;
	clrscr();
	do
	{

	printf("\n 1 - insert ");
	printf("\n 2 - update ");
	printf("\n 3 - remove ");
	printf("\n 4 - display ");
	printf("\n 5 - exit ");


	printf("\n\n Enter your choice : ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			insert();
		break;

		case 2:
			update();
		break;

		case 3:
			del();
		break;

		case 4:
			display();
		break;

		case 5:
		break;

		default:
			printf("\n Invalid Choice ");
	}

	getch();
	}while(ch!=5);
	getch();

}

void insert()
{

	int d;

	if(front==(size-1))
	{
		printf("Queue is full");
	}
	else
	{
		printf("Enter values :");
		scanf("%d",&d);

		if(front==-1)
		{
			rear=0;
		}

		front++;
		q[front]=d;
	}
}

void update()
{
	 if(front == -1 || front > rear){
	printf("\nYour queue is empty");
    }
    printf("\n%d is deleted",q[front]);
    front++;
}

void del()
{

}

void display()
{
	int i;

	if(front==-1)
	{
		printf("Queue is Empty");
	}
	else
	{
		for(i=rear;i<=front;i++);
		{
			printf("\n %d",q[i]);
		}
	}

}
