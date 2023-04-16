#include<stdio.h>
#include<conio.h>

struct Node
{
   int data;
   struct Node *previous, *next;
}*head = NULL;

void begin_ins()
{
    struct Node *newNode;
    int value;
    printf("\n Enter The Value :");
    scanf("%d",&value);
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> previous = NULL;
    if(head == NULL)
    {
       newNode -> next = NULL;
       head = newNode;
    }
    else
    {
       newNode -> next = head;
       head = newNode;
    }
    printf("\nInsertion success!!!");
}
void last_ins()
{
     struct Node *newNode;
    int value;
    printf("\n Enter The Value :");
    scanf("%d",&value);
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode -> data = value;
   newNode -> next = NULL;
   if(head == NULL)
   {
      newNode -> previous = NULL;
      head = newNode;
   }
   else
   {
      struct Node *temp = head;
      while(temp -> next != NULL)
	 temp = temp -> next;
      temp -> next = newNode;
      newNode -> previous = temp;
   }
   printf("\nInsertion success!!!");
}
void display()
{
   if(head == NULL)
      printf("\nList is Empty!!!");
   else
   {
      struct Node *temp = head;
      printf("\nList elements are: \n");
      printf("NULL ");
      while(temp -> next != NULL)
      {
	 printf("%d ",temp -> data);
      }
    }
}
void begin_del()
{
      struct Node *temp = head;
      if(head == NULL)
      printf("List is Empty!!");
   else
   {
      if(temp -> previous == temp -> next)
      {
	 head = NULL;
	 free(temp);
      }
      else{
	 head = temp -> next;
	 head -> previous = NULL;
	 free(temp);
      }
      printf("\nDeletion success!!!");
   }


}

void last_del()
{
      if(head == NULL)
      printf("List is Empty!!");
   else
   {
      struct Node *temp = head;
      if(temp -> previous == temp -> next)
      {
         head = NULL;
         free(temp);
      }
      else{
         while(temp -> next != NULL)
            temp = temp -> next;
         temp -> previous -> next = NULL;
         free(temp);
      }
      printf("\nDeletion success!!!");
   }

}


void main()
{
	int ch;
	clrscr();

	while(1)
	{
		printf("\n=======================\n");
		printf("\n 1. BEFORE INSERT.");
		printf("\n 2. AFTER INSERT.");
		printf("\n 3. BETWEEN INSERT.");
		printf("\n 4. BEFORE DELETE.");
		printf("\n 5. AFTER DELETE.");
		printf("\n 6. DISPLAY.");
		printf("\n 7. EXIT.");
		printf("\n=======================\n");

		printf("\n\n Enter your choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				begin_ins();
				break;
			case 2:
				last_ins();
				break;
		  /*	case 3:
				between_ins();
				break;      */
			case 4:
				begin_del();
				break;
			case 5:
				last_del();
				break;
			case 6:
				display();
				break;
			case 7:
				exit(0);
			default:
				printf("\n Invalid choice!!");

		}
	}
	getch();
}
