#include <stdio.h>

int sum_multiples(int num, int multiples[], int length) 
{
    int sum_of_multiples = 0;
    for (int i = 0; i < num; i++) 
    {
        for (int j = 0; j < length; j++) 
        {
            if (multiples[j] != 0 && i % multiples[j] == 0) 
            {
                sum_of_multiples += i;
                break;
            }
        }
    }
    return sum_of_multiples;
}

int main() 
{
    int num;
    scanf("%d", &num);
    int multiples[] = {3, 5};
    int length = sizeof(multiples) / sizeof(multiples[0]);
    
    printf("%d\n", sum_multiples(num, multiples, length));
    
    return 0;
}
