#include <stdio.h>

char balance_category(int balance) {
    if (balance < 0) {
        return 'N';
    } else if (balance >= 0 && balance <= 499) {
        return 'L';
    } else if (balance >= 500 && balance <= 1999) {
        return 'M';
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

int main(void){
    for (int balance = -500; balance <= 2500; balance += 500) {
        char category_result = balance_category(balance);
        int flag_result = overdraft_flag(balance);
        printf("Balance: %d\t Category: %c\t Overdraft: %d\n", balance, category_result, flag_result);
    }

    return 0;
}