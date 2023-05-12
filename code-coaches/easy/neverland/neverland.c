#include <stdio.h>

int main()
{
    int initial_age, years_passed;
    scanf("%d%d", &initial_age, &years_passed);
    int final_age = initial_age + years_passed;

    printf("My twin is %d years old and they are %d years older than me", final_age, years_passed);

    return 0;
}
