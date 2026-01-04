#include <stdio.h>

char performance_level(int score) {
    if (score >= 90) {
        return 'E';
    } else if (score >= 75 && score <= 89) {
        return 'G';
    } else if (score >= 60 && score <= 74) {
        return 'S';
    } else {
        return 'F';
    }
}

int is_passing(int score) {
    if (score >= 60) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    for (int score = 40; score <= 100; score+= 10) {
        char level_result = performance_level(score);
        int passing_result = is_passing(score);
        printf("Score: %d\t Level: %c\t Pass: %d\n", score, level_result, passing_result);
    }

    return 0;
}