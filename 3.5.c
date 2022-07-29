//5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>99 && n<1000)
    {
        printf("The number is three digit ");
    }
    else
    {
        printf("Not a three digit num");
    }
}