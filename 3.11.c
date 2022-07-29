/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed. */

#include<stdio.h>
int main()
{
    int OS, IOT, TOC, ML, HCI, t;

    printf("Enter the marks of 5 subject out of 100 :");
    scanf("%d %d %d %d %d", &OS, &IOT, &TOC, &ML, &HCI);
    printf("\nOS: %d", OS);
    printf("\nIOT: %d", IOT);
    printf("\nTOC: %d", TOC);
    printf("\nML: %d", ML);
    printf("\nHCI: %d", HCI);

   t=OS+IOT+TOC+ML+HCI/600;
   printf("\nTotal is %d out of 600", t);    
   
   if( t >= 165)
   {
    printf("\n\nCandiate is 'Passed' ");
   }
   else
   {
   printf("\n\nCandidate is 'Failed' ");
   }
   printf("\n");
   return 0;
}