#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) 
        return;
    decimalToBinary(num / 2);
    printf("%d", num % 2);
}
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        decimalToBinary(num);
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char binary[32];
    int decimal = 0, length;

    printf("Enter a binary number: ");
    scanf("%s", binary);
    length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += (int)pow(2, i);
        }
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}


#include <stdio.h>
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;   
        num >>= 1;          
    }
    return count;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of set bits in %d: %d\n", num, countSetBits(num));

    return 0;
}


#include <stdio.h>
long long power(int x, int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
int main() {
    int x, n;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    printf("%d^%d = %lld\n", x, n, power(x, n));
    return 0;
}


