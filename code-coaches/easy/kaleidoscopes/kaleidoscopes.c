#include <stdio.h>
#include <math.h>

double get_total(int numKaleidoscopes)
{
    double price = 5.0;
    double tax = 1.07;
    double subtotal = price;

    if (numKaleidoscopes > 1)
    {
        double discount = 0.9;
        subtotal = (double) numKaleidoscopes * price * discount;
    }

    double total = subtotal * tax;

    // return the result rounded to 2 decimal places
    return round(subtotal * 100) / 100;
}

int main()
{
	int num_kaleidoscopes;
    scanf("%d", &num_kaleidoscopes);

	printf("%.2f", get_total(num_kaleidoscopes));

	return 0;
}
