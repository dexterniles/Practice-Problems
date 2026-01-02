#include <stdio.h>

char operation_name(int option) {
    if (option == 1) {
        return 'A';
    } else if (option == 2) {
        return 'B';
    } else if (option == 3) {
        return 'C';
    } else if (option == 4) {
        return 'D';
    } else {
        return 'X';
    }
}

int main() {
    char result = operation_name(25);
    printf("Your operation name is %c\n", result);

    return 0;
}