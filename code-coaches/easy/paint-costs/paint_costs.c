#include <stdio.h>
#include <math.h>

int get_total_paint_costs(int num_colors)
{
    double base_price = 40.0;
	double paint_price = 5.0;
	double tax_percent = 10.0;

	double subtotal = base_price + (paint_price * num_colors);
	int total = ceil((subtotal / tax_percent) + subtotal);

	return total;
}

int main()
{
    int num_colors;
    scanf("%d", &num_colors);

    printf("%d", get_total_paint_costs(num_colors));

    return 0;
}
