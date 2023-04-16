#include <stdio.h>
void main()
{
    int num,x,mul=1, sum=0;

    printf("Enter a number\n");
    scanf("%d", &num);

    while (num>0)
    {
        x = num%10;
        sum = sum+x;
        mul = mul*x;
        num = num/10;
    }
    if(sum == mul)
    {
        printf("perfect");
    }
    else{
        printf("not perfect");
    }
}