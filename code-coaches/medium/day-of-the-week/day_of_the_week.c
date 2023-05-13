#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* get_day_of_week(char* date_string)
{
    struct tm date = {0};
    char* day = malloc(sizeof(char) * 10);

    if (strptime(date_string, "%m/%d/%Y", &date) == NULL)
    {
        if (strptime(date_string, "%B %d, %Y", &date) == NULL)
        {
            return "";
        }
    }

    strftime(day, 10, "%A", &date);
    return day;
}

int main()
{
    char date_string[50];
    fgets(date_string, sizeof(date_string), stdin);

    printf("%s", get_day_of_week(date_string));

    return 0;
}
