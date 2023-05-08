#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char *str, const char delim, char *out[], int *count)
{
    char *token;
    *count = 0;
    token = strtok(str, &delim);
    while (token != NULL)
    {
        out[*count] = token;
        (*count)++;
        token = strtok(NULL, &delim);
    }
}

char *get_eu_date(char *us_date)
{
    char *eu_date = malloc(sizeof(char) * 11);
    if (eu_date == NULL)
    {
        fprintf(stderr, "Memory allocation error.\n");
        return NULL;
    }

    char *us_date_split[3];
    int count;
    char *month;
    char *day;

    if (strstr(us_date, "/") != NULL)
    {  // Check if the date is in MM/DD/YYYY format
        split(us_date, '/', us_date_split, &count);
        month = us_date_split[0];
        day = us_date_split[1];
    }
    else
    {  // Check if the date is in Month DD, YYYY format
        split(us_date, ' ', us_date_split, &count);
        char *month_str = us_date_split[0];
        if (strcmp(month_str, "January") == 0)
        {
            month = "1";
        }
        else if (strcmp(month_str, "February") == 0)
        {
            month = "2";
        }
        else if (strcmp(month_str, "March") == 0)
        {
            month = "3";
        }
        else if (strcmp(month_str, "April") == 0)
        {
            month = "4";
        }
        else if (strcmp(month_str, "May") == 0)
        {
            month = "5";
        }
        else if (strcmp(month_str, "June") == 0)
        {
            month = "6";
        }
        else if (strcmp(month_str, "July") == 0)
        {
            month = "7";
        }
        else if (strcmp(month_str, "August") == 0)
        {
            month = "8";
        }
        else if (strcmp(month_str, "September") == 0)
        {
            month = "9";
        }
        else if (strcmp(month_str, "October") == 0)
        {
            month = "10";
        }
        else if (strcmp(month_str, "November") == 0)
        {
            month = "11";
        }
        else if (strcmp(month_str, "December") == 0)
        {
            month = "12";
        }
        day = strtok(us_date_split[1], ",");
    }

    sprintf(eu_date, "%s/%s/%s", day, month, us_date_split[count - 1]);
    return eu_date;
}

int main() {
    char us_date[20];
    fgets(us_date, 20, stdin);
    us_date[strcspn(us_date, "\n")] = '\0';  // Remove the newline character

    char *eu_date = get_eu_date(us_date);
    if (eu_date != NULL)
    {
        printf("%s\n", eu_date);
        free(eu_date);
    }
    
    return 0;
}