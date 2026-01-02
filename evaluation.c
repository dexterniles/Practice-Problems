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

int pass_fail(int score) {
    if (score >= 60) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) { /* doesn't actually change anything, just explicitly says that the function doesn't take any parameters */
    int score = 79;
    char result_letter = letter_grade(score);
    int result_pass_fail = pass_fail(score);
    printf("Grade: %c\nPass/Fail: %d\n", result_letter, result_pass_fail);

    return 0;
}