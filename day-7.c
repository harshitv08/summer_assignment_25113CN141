#include <stdio.h>
long long fac(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result=result*i;
    }
    return result;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, fac(num));
    }

    return 0;
}


#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) 
        return 0; 
    else if (n == 1) 
        return 1;  
    else
        return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}


#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0; 
    } else {
        return (n % 10) + sum(n / 10);  
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num; 
    }
    printf("Sum of digits = %d\n", sum(num));
    return 0;
}


#include <stdio.h>
int reve(int n, int rev) {
    if (n == 0) {
        return rev;
    } else {
        return reve(n / 10, rev * 10 + (n % 10)); 
    }
}
int main() {
    int num, reverse;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverse = reve(num, 0);

    printf("Reversed number = %d\n", reverse);
    return 0;
}



