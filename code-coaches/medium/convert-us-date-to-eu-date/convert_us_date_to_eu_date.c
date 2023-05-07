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

char *usToEuDate(char *usDate)
{
    char *euDate = malloc(sizeof(char) * 11);
    if (euDate == NULL)
    {
        fprintf(stderr, "Memory allocation error.\n");
        return NULL;
    }

    char *usDateSplit[3];
    int count;
    char *month;
    char *day;

    if (strstr(usDate, "/") != NULL)
    {  // Check if the date is in MM/DD/YYYY format
        split(usDate, '/', usDateSplit, &count);
        month = usDateSplit[0];
        day = usDateSplit[1];
    }
    else
    {  // Check if the date is in Month DD, YYYY format
        split(usDate, ' ', usDateSplit, &count);
        char *monthStr = usDateSplit[0];
        if (strcmp(monthStr, "January") == 0)
        {
            month = "1";
        }
        else if (strcmp(monthStr, "February") == 0)
        {
            month = "2";
        }
        else if (strcmp(monthStr, "March") == 0)
        {
            month = "3";
        }
        else if (strcmp(monthStr, "April") == 0)
        {
            month = "4";
        }
        else if (strcmp(monthStr, "May") == 0)
        {
            month = "5";
        }
        else if (strcmp(monthStr, "June") == 0)
        {
            month = "6";
        }
        else if (strcmp(monthStr, "July") == 0)
        {
            month = "7";
        }
        else if (strcmp(monthStr, "August") == 0)
        {
            month = "8";
        }
        else if (strcmp(monthStr, "September") == 0)
        {
            month = "9";
        }
        else if (strcmp(monthStr, "October") == 0)
        {
            month = "10";
        }
        else if (strcmp(monthStr, "November") == 0)
        {
            month = "11";
        }
        else if (strcmp(monthStr, "December") == 0)
        {
            month = "12";
        }
        day = strtok(usDateSplit[1], ",");
    }

    sprintf(euDate, "%s/%s/%s", day, month, usDateSplit[count - 1]);
    return euDate;
}

int main() {
    char usDate[20];
    fgets(usDate, 20, stdin);
    usDate[strcspn(usDate, "\n")] = '\0';  // Remove the newline character

    char *euDate = usToEuDate(usDate);
    if (euDate != NULL)
    {
        printf("%s\n", euDate);
        free(euDate);
    }
    return 0;
}