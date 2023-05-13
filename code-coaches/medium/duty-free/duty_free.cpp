#include <iostream>
#include <vector>

bool is_on_budget(const std::vector<float>& items_price_eur)
{
    float usd_eur_rate = 1.1;
    float limit_price_usd = 20;

    for (float item_price_eur : items_price_eur)
    {
        float item_price_usd = item_price_eur * usd_eur_rate;
        if (item_price_usd > limit_price_usd)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::vector<float> items_price_eur;
    float price;
    while (std::cin >> price)
    {
        items_price_eur.push_back(price);
    }

    if (is_on_budget(items_price_eur))
        std::cout << "On to the terminal";
    else
        std::cout << "Back to the store";

    return 0;
}
