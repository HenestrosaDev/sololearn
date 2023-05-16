#include <stdio.h>

int q_sequence(int n)
{
    if (n <= 2)
        return 1;
    else
        return q_sequence(n - q_sequence(n - 1)) + q_sequence(n - q_sequence(n - 2));
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", q_sequence(n));

    return 0;
}
