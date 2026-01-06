#include <stdio.h>

void scale_array(int arr[], int size, int factor) {
    for (int i = 0; i < size; i++) {
        arr[i] *= factor;
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

int sum_array(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    } return sum;
}

int main(void) {
    int readings[] = {2, 4, 6, 8, 10};
    int size  = sizeof(readings) / sizeof(readings[0]);
    int original_total = sum_array(readings, size);

    print_array(readings, size);
    
    scale_array(readings, size, 2);
    print_array(readings, size);

    int scaled_total = sum_array(readings, size);

    printf("Original Sum: %d\tScaled Sum: %d\n",original_total, scaled_total);

    return 0;
}