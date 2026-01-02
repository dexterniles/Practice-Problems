#include <stdio.h>

char temperature_category(int temp) {
    if (temp < 0) {
        return 'L';
    } else if (temp >= 0 && temp <= 24) {
        return 'N';
    } else if (temp >= 25 && temp <= 74) {
        return 'H';
    } else {
        return 'X';
    }
}

char voltage_category(int voltage) {
    if (voltage < 10) {
        return 'C';
    } else if (voltage >= 10 && voltage <= 11) {
        return 'W';
    } else {
        return 'N';
    }
}

int system_status(int temp, int voltage) {
    if (temp >= 75 || voltage < 10) {
        return 2;
    } else if (temp >= 25 && temp <= 74 || voltage >= 10 && voltage <= 11) {
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
    /* inputs */
    int temp = 82;
    int voltage = 11;

    /* result storage variables */
    char temperature_result = temperature_category(temp);
    char voltage_result = voltage_category(voltage);
    int status_result = system_status(temp, voltage);
    char label_result = system_status_label(status_result);

    printf("Temperature Category: %c\nVoltage Category: %c\nSystem Status Code: %d\n System Status Label: %c\n", temperature_result, voltage_result, status_result, label_result);

    return 0;
}