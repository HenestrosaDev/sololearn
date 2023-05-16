#include <stdio.h>
#include <string.h>

char get_pi_decimal_at(int index)
{
    char pi_decimals[] = "14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270938521105559644622948954930381964428";
    char decimal = pi_decimals[index];
    return decimal;
}

int main()
{
    // - 1 to convert the index to 0-based index
    int index;
    scanf("%d", &index);
    index--;

    printf("%c\n", get_pi_decimal_at(index));

    return 0;
}
