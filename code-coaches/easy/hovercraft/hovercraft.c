#include <stdio.h>

int main()
{
    int unitsSold;
    scanf("%d", &unitsSold);

    int sellPrice = 3000000;
    int costPrice = 2000000;
    int insurancePrice = 1000000;

    int unitsBuilt = 10;
    int expenses = (unitsBuilt * costPrice) + insurancePrice;
    int benefit = unitsSold * sellPrice;

    if (benefit > expenses)
    {
        printf("Profit");
    }
    else if (benefit < expenses)
    {
        printf("Loss");
    }
    else
    {
        printf("Broke Even");
    }

    return 0;
}
