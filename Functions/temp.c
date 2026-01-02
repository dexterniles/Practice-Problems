#include <stdio.h>

int classify_temperature(int temp) {
    if (temp > 25) {
        return 1;
    } else if (temp >= 0) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    int result = classify_temperature(-13);
    printf("The temperature class is %d\n", result);

    return 0;
}