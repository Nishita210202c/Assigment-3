//7. Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("\nThe quadratic eq is in form ax^2 + bc +c . Enter the valuse of a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    d=b*b-4*a*c;
    printf("\nd= %d",d);

    if(d==0)
    {
        printf("\nRoots are real and equal\n");
    }

    if(d>0)
    {
        printf("\nRoots are real and distinct\n");

    }
    if(d<0)
    {
        printf("\nRoots are imaginary\n\n");
    }
}