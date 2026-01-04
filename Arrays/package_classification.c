#include <stdio.h>

char weight_class(int weight) {
    if (weight <= 5) {
        return 'L';
    } else if (weight >= 6 && weight <= 20) {
        return 'M';
    } else {
        return 'H';
    }
}

int requires_special_handling(int weight) {
    if (weight > 20) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int weights[] = {1, 4, 6, 12, 20, 25, 30};
    int size = 7;

    for (int i = 0; i < size; i++) {
        int weight = weights[i];
        char class = weight_class(weight);
        int handling = requires_special_handling(weight);

        printf("Weight: %d lbs.\tClass: %c\tSpecial: %d\n", weight, class, handling);
    }

    return 0;
}