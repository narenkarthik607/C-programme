#include <stdio.h>

int main() {
    int n, i, temp, digit, sum;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        while(temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}
