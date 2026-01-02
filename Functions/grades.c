#include <stdio.h>

char letter_grade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    char result = letter_grade(49);
    printf("Your grade is %c\n", result);

    return 0;
}