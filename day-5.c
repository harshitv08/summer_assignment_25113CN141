#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum=sum+i;
        }
    }
    if (sum==n && n != 0) {
        printf("%d is a Perfect Number\t", n);
    } else {
        printf("%d is NOT a Perfect Number\t", n);
    }
    return 0;
}



int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum=sum+factorial(digit);
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is a Strong Number \t", num);
    } else {
        printf("%d is NOT a Strong Number \t", num);
    }
    return 0;
}


int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    long long num;
    int largestPrime = -1;
    printf("Enter a number: ");
    scanf("%lld", &num);

    for (long long i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            largestPrime = i;
        }
    }
    if (largestPrime != -1) {
        printf("Largest Prime Factor of %lld is %d\n", num, largestPrime);
    } else {
        printf("No prime factors found.\n");
    }
    return 0;
}


