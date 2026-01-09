#include <stdio.h>

int min_valid_only(const int arr[], const int valid[], int size) {
    int min_value = 0;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (valid[i] == 1) {
            if (found == 0) {
                min_value = arr[i];
                found = 1;
            } else if (arr[i] < min_value) {
                min_value = arr[i];
            }
        }
    }

    if (found == 0) {
        return 0;
    }
    return min_value;
}

int max_valid_only(const int arr[], const int valid[], int size) {
    int max_value = 0;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (valid[i] == 1) {
            if (found == 0) {
                max_value = arr[i];
                found = 1;
            } else if (arr[i] > max_value) {
                max_value = arr[i];
            }
        }
    }

    if (found == 0) {
        return 0;
    }
    return max_value;
}

int main(void) {
    int temps[] = {28, 35, 31, 55, 62};
    int is_valid[] = {0, 0, 1, 1, 0};
    int size = sizeof(temps) / sizeof(temps[0]);
    int min_result = min_valid_only(temps, is_valid, size);
    int max_result = max_valid_only(temps, is_valid, size);

    printf("Min: %d\n", min_result);
    printf("Max: %d\n", max_result);

    return 0;
}