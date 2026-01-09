#include <stdio.h>

void copy_array(int dest[], const int src[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

void apply_offset(int arr[], int size, int offset) {
    for (int i = 0; i < size; i++) {
        arr[i] -= offset;
    }
}

void print_array(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

int main(void) {
    int temps[] = {28, 35, 41, 55, 62};
    int size = sizeof(temps) / sizeof(temps[0]);

    int raw_copy[size];

    print_array(temps, size);
    copy_array(raw_copy, temps, size);
    apply_offset(raw_copy, size, 2);
    print_array(raw_copy, size);

    return 0;
}