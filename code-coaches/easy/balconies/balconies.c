#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculate_area(char *balcony) {
    char *token;
    int length, width;
    token = strtok(balcony, ",");
    length = atoi(token);

    token = strtok(NULL, ",");
    width = atoi(token);

    return length * width;
}

int main() {
    char balcony_a[100], balcony_b[100];
    fgets(balcony_a, 100, stdin);
    fgets(balcony_b, 100, stdin);

    int area_a = calculate_area(balcony_a);
    int area_b = calculate_area(balcony_b);

    if (area_a > area_b)
        printf("Apartment A");
    else
        printf("Apartment B");

    return 0;
}
