#include <stdio.h>

void main(){
    int num,r,d;

    printf("\nEnter your number: ");
    scanf("%d",&num);
    printf("\nEnter divisor number: ");
    scanf("%d",&d);

    while(num >=d)
    {
        num = num - d;
    }
    r = num;

    printf("Your reminder is: %d",r);

}