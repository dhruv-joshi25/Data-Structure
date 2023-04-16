#include <stdio.h>

int main(){

    int i, x, sum, temp;

    for (i=0;i<=500;i++){
        temp = i;
        sum = 0;
        while (temp!=0){
            x = temp%10;
            sum = sum +(x*x*x);
            temp = temp/10;
        }
        if (sum == i){
            printf("%d ", i);
        }
    }
printf("\n");
    return 0;
}
