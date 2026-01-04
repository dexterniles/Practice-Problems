#include <stdio.h>

int urgency_code(int sev) {
    if (sev >= 8) {
        return 2;
    } else if (sev >= 4 && sev <= 7) {
        return 1;
    } else {
        return 0;
    }
}

char urgency_label(int code) {
    if (code == 0) {
        return 'L';
    } else if (code == 1) {
        return 'M';
    } else if (code == 2) {
        return 'H';
    } else {
        return 'X';
    }
}

int main(void) {
    int severities[] = {1, 3, 4, 6, 8, 10};
    int size = 6;

    for (int i = 0; i < size; i++) {
        int sev = severities[i];

        int code = urgency_code(sev);
        char label = urgency_label(code);

        printf("Severity: %d\t Code: %d\t Label: %c\n", sev, code, label);
    }

    return 0;
}