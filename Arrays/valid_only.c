#include <stdio.h>

int sum_valid_only(const int arr[], const int valid[], int size) {
    int valid_sum = 0;

    for (int i = 0; i < size; i++) {
        if (valid[i] == 1) {
            valid_sum += arr[i];
        }
    } 
    
    return valid_sum;
}

int main(void) {
    int temps[] = {28, 35, 41, 55, 62};
    int is_valid[] = {1, 1, 0, 1, 0};
    int size = sizeof(temps) / sizeof(temps[0]);
    int sum = 0;
    int valid = sum_valid_only(temps, is_valid, size);

    for (int i = 0; i < size; i++) {
        sum += temps[i];
    }

    printf("Sum: %d\tValid Sum: %d\n", sum, valid);

    return 0;
}