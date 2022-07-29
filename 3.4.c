/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/

#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n & 1 == 1)
    {
       printf("the given num is odd");
    }
    else
    {
        printf("The given num is even");
    }

    
}

