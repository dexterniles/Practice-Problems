#include <stdio.h>

void copy_array(int dst[], const int src[], int size) {
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
}

void apply_offset(int arr[], int size, int offset) {
    for (int i = 0; i < size; i++) {
        offset -= arr[i];
    }
}

char temp_zone(int temp_f) {
    if (temp_f < 32) {
        return 'C';
    } else if (temp_f >= 32 && temp_f <= 64) {
        return 'M';
    } else {
        return 'H';
    }
}

int sum_array(const int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    } return sum;
}

int sum_valid_only(const int arr[], const int valid[], int size) {
    int valid_sum = 0;

    for (int i = 0; i < size; i++) {
        if (valid[i] == 1) {
            valid_sum += arr[i];
        }
    } return valid_sum;
}

int min_valid_only(const int arr[], const int valid[], int size) {
    int min_valid_value = 0;

    for (int i = 0; i < size; i++) {
        if (valid[i] == 1) {
            min_valid_value = min(arr[i]);
        }
    } return min_valid_value;
}

void print_daily_report(const int raw[], const int adj[], const int valid[], int size) {

}

void print_summary(const int adj[], const int valid[], int size) {

}

int main(void) {
    int temps[] = {28, 35, 41, 55, 62, 71, 68, 49, 32, 26};
    int is_valid[] = {1, 1, 1, 1, 0, 1, 1, 1, 1, 0};
    int size = sizeof(temps) / sizeof(temps[0]);

    int raw_backup[size];
    int adjusted[size];

    return 0;
}