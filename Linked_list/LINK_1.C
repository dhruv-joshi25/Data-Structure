#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
	struct node *next;
};

struct node *top=NULL;
struct node *temp, *top1;

void pop();
void push(int a);
void display();
void peep();
void main()
{
	int no,ch,e;
	clrscr();

	while(1)
	{

		printf("\n 1 - PUSH \n 2 - POP \n 3 - PEEP \n 4 - UPDATE_TOP_MOST_ELEMENT \n 5 - DISPLAY \n 6 - UPDATE_SPECIFIC_ELEMENT \n 7 - EXIT ");

		printf("\n\n Enter Your Choice :");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("\n Enter Value :");
				scanf("%d",&e);
				push(e);
			break;

			case 2:
				pop();
			break;

			case 3:
				peep();
			break;

			case 4:
			      //	update();

			break;

			case 5:
				display();
			break;

			case 6:
				exit(0);
			break;

			default :
				printf("Wrong Input");
			break;

		}
	}

}

void push(int a)
{
	if(top == NULL)
	{
		top = (struct node *)malloc(1*sizeof(struct node));
		top-> next = NULL;
		top-> data = a;
	}
	else
	{
		temp = (struct node *)malloc(1*sizeof(struct node));
		temp->next=top;
		temp->data=a;
		top=temp;
	}

}


void peep()
{
	if(top == NULL)
	{
		printf("\n Stack Is Empty ");
	}
	else
	{
		printf("\n Top Most Value Is  : %d",top->data);
	}
}

void display()
{
	top1 = top;

	if(top == NULL)
	{
		printf("\n Stack Is Empty ");
	}
	else
       {
		while(top1 != NULL)
		{
			printf("\n %d",top1->data);
			top1 = top1 -> next;
		}
	}


}
void pop()
{

	if(top==NULL)
	{
		printf("\n  Stack Is Empty");
	}
	else
	{
		printf("\n Removed Value Is : %d",top->data);
		top=top->next;
	}

}
