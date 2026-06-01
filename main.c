#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;// using int because withdrawal amounts are whole numbers without decimals
    int notes5000, notes1000;// using int because currency bills can only be counted as whole units
    int remaining;// using int because remaining is a whole number
    printf("-----------------------------------------\n");
    printf("Please Enter Withdraw Amount: ");
    scanf("%d",&amount);

    remaining = amount;

    notes5000 = amount / 5000;
    remaining = amount % 5000;

    notes1000 = remaining / 1000;
    remaining = remaining % 1000;




    printf("\n-----------------------------------------\n");
    printf("     Number of Notes Clarification\n");
    printf("-----------------------------------------\n");
    printf("         5000 Notes =%6d\n",notes5000);
    printf("         1000 Notes =%6d\n",notes1000);
    printf("-----------------------------------------\n");

    return 0;
}

