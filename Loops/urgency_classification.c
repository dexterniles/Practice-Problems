#include <stdio.h>

int urgency_code(int severity) {
    if (severity >= 8) {
        return 2;
    } else if (severity >= 4 && severity <= 7) {
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
    for (int severity = 0; severity <= 10; severity += 1) {
        int code = urgency_code(severity);
        int urgency_result = urgency_code(severity);
        char label_result = urgency_label(code);
        
        printf("Severity: %d\t Code: %d\t Label: %c\n", severity, urgency_result, label_result);
    }

    return 0;
}