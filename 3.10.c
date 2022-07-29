/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.  */

#include<stdio.h>
int main()
{
    float cp, sp,  P, L;
    int p, l;

    printf("\n\nEnter cost price and Selling price : ");
    scanf("%f %f", &cp, &sp);
    printf("\nCost price : %f", cp);
    printf("\nSelling Price: %f", sp);

if(cp>sp)
    {
        l=cp-sp;
        printf("\nLoss is %d\n", l);
        L= l*100/cp;
        printf("Loss Percentage is : %f", L);
    }
   else
    {
        p=sp-cp;
        printf("\nProfit is %d\n", p);
        P= p*100/cp;
        printf("profit Percentage is : %f", P);
    }
}



