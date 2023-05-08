#include <stdio.h>
#include <string.h>

const char* convert_from_12h_to_24h(char time_12h[]) {
    int hours, minutes;
    char am_pm[3];

    sscanf(time_12h, "%d:%d %s", &hours, &minutes, am_pm); // parse the input string

    if (strcmp(am_pm, "PM") == 0 && hours != 12)
        hours += 12;
    else if (strcmp(am_pm, "AM") == 0 && hours == 12)
        hours = 0;

    char* time_str = (char*) malloc(6 * sizeof(char));
    sprintf(time_str, "%02d:%02d", hours, minutes);
    return time_str;
}

int main() {
    char time_12h[10];
    fgets(time_12h, 10, stdin); // read the input string

    printf("%s", convert_from_12h_to_24h(time_12h));

    return 0;
}
