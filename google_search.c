#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUERY_LEN 1024

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <search terms>\n", argv[0]);
        return 1;
    }

    char query[MAX_QUERY_LEN] = {0};
    for (int i = 1; i < argc; ++i) {
        strcat(query, argv[i]);
        if (i < argc - 1) strcat(query, "+");
    }

    char url[MAX_QUERY_LEN + 64];
    snprintf(url, sizeof(url), "https://www.google.com/search?q=%s", query);

    char command[MAX_QUERY_LEN + 100];
    snprintf(command, sizeof(command), "nohup xdg-open \"%s\" >/dev/null 2>&1 &", url);

    system(command);

    return 0;
}