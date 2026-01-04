#include <stdio.h>

char risk_category(int score) {
    if (score < 580) {
        return 'H';
    } else if (score >= 580 && score <= 669) {
        return 'M';
    } else {
        return 'L';
    }
}

int needs_review(int score) {
    if (score < 580) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int high_count = 0;
    int med_count = 0;
    int low_count = 0;
    int review_count = 0;

    int scores[] = {520, 579, 580, 610, 669, 670, 720};
    int size = sizeof(scores) / sizeof(scores[0]); /* automatically calculates the size of the array and updates */

    for (int i = 0; i < size; i++) {
        int score = scores[i];
        char category = risk_category(score);
        int review = needs_review(score);

        if (category == 'H') {
            high_count++;
        } else if (category == 'M') {
            med_count++;
        } else {
            low_count++;
        }

        if (review == 1) {
            review_count++;
        }

        printf("Score: %d\t Risk: %c\t Review: %d\n", score, category, review);
    }

    printf("\nSummary\nHigh Risk: %d\nMedium Risk: %d\nLow Risk: %d\nReview Count: %d\n", high_count, med_count, low_count, review_count);

    return 0;
}