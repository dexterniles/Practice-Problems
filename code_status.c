#include <stdio.h>

int system_status_code(int temp, int voltage) {
    if (temp >= 90 || voltage < 10) {
        return 2;
    } else if (temp >= 75 && temp <= 89 || voltage >= 10 && voltage <= 11) { /* must combine the boundaries with && to ensure that they evaluate properly, then tie them together with || to check for each value */
        return 1;
    } else {
        return 0;
    }
}

char system_status_label(int status_code) {
    if (status_code == 0) {
        return 'O';
    } else if (status_code == 1) {
        return 'W';
    } else if (status_code == 2) {
        return 'C';
    } else {
        return 'X';
    }
}

int main(void) {
    int temp = 82;
    int voltage = 11;

    int result_code = system_status_code(temp, voltage);
    char result_label = system_status_label(result_code);

    printf("Status Code: %d\nStatus Label: %c\n", result_code, result_label);

    return 0;
}