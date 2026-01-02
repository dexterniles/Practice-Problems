#include <stdio.h>

char age_group(int age) {
    if (age >= 65) {
        return 'S';
    } else if (age >= 20) {
        return 'A';
    } else if (age >= 13) {
        return 'T';
    } else {
        return 'C';
    }
}

int main() {
    char result = age_group(12);
    printf("Your age group is %c\n", result);

    return 0;
}