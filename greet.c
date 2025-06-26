#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <your-name>\n", argv[0]);
        return 1;
    }

    printf("Hello, %s! Hope you're having a great day.\n", argv[1]);
    return 0;
}
