#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int get_num_days_between(char* from_str, char* to_str)
{
    char date_format[] = "%B %d, %Y";

    struct tm from_date = {0};
    strptime(from_str, date_format, &from_date);

    struct tm to_date = {0};
    strptime(to_str, date_format, &to_date);

    time_t from_time = mktime(&from_date);
    time_t to_time = mktime(&to_date);

    int delta = difftime(to_time, from_time) / (60 * 60 * 24);

    return delta;
}

int main()
{
    char from_str[100];
    char to_str[100];
    fgets(from_str, sizeof(from_str), stdin);
    fgets(to_str, sizeof(to_str), stdin);

    printf("%d", get_num_days_between(from_str, to_str));

    return 0;
}
