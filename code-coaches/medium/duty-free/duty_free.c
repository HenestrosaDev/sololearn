#include <stdio.h>
#include <stdlib.h>

int is_on_budget(float *items_price_eur, int num_items)
{
    float usd_eur_rate = 1.1;
    float limit_price_usd = 20;

    for (int i = 0; i < num_items; i++)
    {
        float item_price_eur = items_price_eur[i];
        float item_price_usd = item_price_eur * usd_eur_rate;
        if (item_price_usd > limit_price_usd)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    float *items_price_eur = NULL;
    int num_items = 0;
    float price;

    // Read item prices from standard input
    while (scanf("%f", &price) == 1)
    {
        num_items++;
        items_price_eur = (float *)realloc(items_price_eur, num_items * sizeof(float));
        if (items_price_eur == NULL)
        {
            printf("Error: out of memory\n");
            return 1;
        }
        items_price_eur[num_items - 1] = price;
    }

    if (is_on_budget(items_price_eur, num_items))
        printf("On to the terminal\n");
    else
        printf("Back to the store\n");

    // Free memory and return
    free(items_price_eur);
    return 0;
}
