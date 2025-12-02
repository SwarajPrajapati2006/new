#include <stdio.h>

int sum(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + sum(num / 10);
}

int main() {
    int num = 45;

    int result = sum(num);

    printf("Sum of digits = %d", result);

    return 0;
}
