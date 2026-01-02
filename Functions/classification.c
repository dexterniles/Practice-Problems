#include <stdio.h>

int classify_number(int n) {
    if (n > 0) {
        return 1;
    } else if (n == 0) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    int result = classify_number(0);
    printf("The result is %d\n", result);

    return 0;
}