#include <stdio.h>
#include <string.h>

char* extract_video_id(char* url) {
    char* id = NULL;
    char* pos = NULL;

    if ((pos = strstr(url, "v=")) != NULL) {
        id = pos + 2; // add 2 to skip "v="
    } else if ((pos = strstr(url, "be/")) != NULL) {
        id = pos + 3; // add 3 to skip "be/"
    }

    return id;
}

int main() {
    char url[256];
    fgets(url, 256, stdin);

    char* id = extract_video_id(url);
    if (id == NULL) {
        printf("Invalid YouTube URL.\n");
    } else {
        printf("%s", id);
    }

    return 0;
}
