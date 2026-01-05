#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

int sum_array(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i]; /* can also be written as sum = sum + arr[i] but this version is more succinct */
    } return sum;
}

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int total = sum_array(numbers, size);

    print_array(numbers, size);
    printf("Sum: %d\n", total);

    return 0;
}