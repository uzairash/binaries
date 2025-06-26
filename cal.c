#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculator(int a, int b, char operator);

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    char operator = argv[2][0];
    int b = atoi(argv[3]);

    int result = calculator(a, b, operator);
    printf("Result: %d\n", result);
    return 0;
}

int calculator(int a, int b, char operator) {
    switch (operator) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case 'x':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Error: Division by zero.\n");
                exit(EXIT_FAILURE);
            }
        default:
            printf("Error: Unknown operator '%c'.\n", operator);
            exit(EXIT_FAILURE);
    }
}