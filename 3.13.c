//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int n;
    printf("\n\nEnter a number:");
    scanf("%d",&n);

    if(n%3==0 && n%2==0)
    {
        printf("Given %d Number is divisible by 3 and 2\n\n", n);
    }
    else{
        printf("Not divisible");
    }
}
