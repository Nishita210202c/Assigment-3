//12. Write a program to check whether a given alphabet is in uppercase or lowercase.


#include<stdio.h>
int main()
{
   // char A=65, a=97;
    char n;

    printf("\nEnter a alphabeat:");
    scanf("%c", &n);

    if(n>=65 && n<=97)
    {
        printf("Uppercase");
    }
    else if(n>=97 && n<=112)
    {
        printf("Lowercase");
    }
    return 0;

}



















