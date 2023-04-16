#include<stdio.h>
#include<stdlib.h>
#define max 5

int queue[max];
int front = -1;
int rear = -1;


void add_value(data){
    if(front==0 && rear == max-1){
	    printf("\nYour queue is full");
    }
    if(front == rear+1){
	printf("\nYour queue is full");
    }
    if(rear==max-1 && front!=0)
	    rear = 0;
    else if(front == -1 && rear == -1){
	front = 0;
	rear = 0;
    }
    else
	rear = rear+1;
    queue[rear] = data;
    printf("\nYour data is Inserted");


}
void delete(){

    if(front == -1 || front > rear){
	printf("\nYour queue is empty");
    }
    printf("\n%d is deleted",queue[front]);
    front++;
}

void display(){

    int i;
    if(front == -1)
    {
	printf("\nYour queue is empty");
    }
    for(i=front;i<=rear;i++)
    {
	printf("\n%d",queue[i]);
    }

}
void main()
{
    int ch, data;
    clrscr();
    do{
	printf("\n1.Add new value");
	printf("\n2.Delete Value");
	printf("\n3.Display Value");
	printf("\n4.Exit");

	printf("\nEnter Your Choice: ");
	scanf("\n%d", &ch);

	switch (ch)
	{
	case 1:
	    printf("\nEnter Your Value: ");
	    scanf("%d",&data);
	    add_value(data);
	    break;
	case 2:
	    delete();
	    break;

	case 3:
	    display();
	    break;
	}

    } while(ch!=4);
}
