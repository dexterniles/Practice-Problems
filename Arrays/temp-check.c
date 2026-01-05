#include <stdio.h>

char temp_reading(int temp) {
    if (temp <= 32) {
        return 'F';
    } else if (temp > 32 && temp <= 64) {
        return 'M';
    } else {
        return 'W';
    }
}

char need_jacket(int temp) {
    if (temp <= 32) {
        return 'Y';
    } else if (temp > 32 && temp <= 64) {
        return 'M';
    } else {
        return 'N';
    }
}

int main(void) {
    int temps[] = {-12, -3, 9, 17, 34, 62, 78, 91};
    int size = sizeof(temps) / sizeof(temps[0]);

    for (int i = 0; i < size; i++) {
        int temp = temps[i];
        char reading = temp_reading(temp);
        char jacket = need_jacket(temp);

        printf("Temp: %d\tReading: %c\tNeed Jacket: %c\n", temp, reading, jacket);
    }

    return 0;
}