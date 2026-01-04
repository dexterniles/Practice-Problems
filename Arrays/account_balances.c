#include <stdio.h>

char balance_category(int balance) {
    if (balance < 0) {
        return 'N';
    } else if (balance >= 0 && balance <= 499) {
        return 'L';
    } else {
        return 'H';
    }
}

int overdraft_flag(int balance) {
    if (balance < 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int balances[] = {-200, 0, 250, 800, 1500, 2500};
    int size = 6;

    for (int i = 0; i = size; i++) {
        int balance = balances[i];
        char category = balance_category(balance);
        int flag = overdraft_flag(balance);

        printf("Balance: %d\tCategory: %c\tFlag: %d\n", balance, category, flag);
    }

    return 0;
}