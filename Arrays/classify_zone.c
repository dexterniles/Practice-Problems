#include <stdio.h>

char temp_zone(int temp_f) {
    if (temp_f < 32) {
        return 'C';
    } else if (temp_f >= 32 && temp_f <= 64) {
        return 'M';
    } else {
        return 'H';
    }
}

void print_zones(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr[i];
        char zone = temp_zone(arr[i]); /* can also be written as char zone = temp_zone(temp) */

        printf("Temp: %d\tZone: %c\n", temp, zone);
    }
}

int main(void) {
    int temps[] = {28, 32, 50, 65, 80};
    int size = sizeof(temps) / sizeof(temps[0]);

    print_zones(temps, size);

    return 0;
}