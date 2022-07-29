//6. Write a program to print greater between two numbers. Print one number if both are the same

#include<stdio.h>
int main()
{
    int a, b;

    printf("Enter two Numbers : ");
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        printf("%d is greater", a);
    }
    
    if(b>a)
    {
        printf("%d is greater", b);
    }

    if(a==b)
    {
        printf("%d is equal", a);
    }


    

}