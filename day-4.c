#include <stdio.h>
int main()
{
    int n, a, b, next, i;
    printf("enter thee number of terms:\t");
    scanf("%d", &n);
    printf("enter the first two terms:\t");
    scanf("%d %d", &a, &b);
    printf("the fibonacci series is:\t");
    for (i=1; i<=n; i++){
        if (i<=1){
            next=a;
        }
        else {
            next=a+b;
            a=b;
            b=next;
        }
        printf("%d", next);
    }
    return 0;
}


int fib(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    else return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("enter the number of terms:\t");
    scanf("%d", &n);
    printf("the nth fibonacci term %d= %d", n, fib(n));
    return 0;
}


#include <stdio.h>
#include <math.h>
int countDigits(int num){
    if (num==0) return 0;
    else return 1+countDigits(num/10);
}
int armstrongsum(int num, int n){
    if (n==0) return 0;
    else return pow(num%10, n)+ armstrongsum(num/10, n);
}
int main(){
    int num, n;
    printf("enter the number here:\t");
    scanf("%d", &num);
    n=countDigits(num);
    if (armstrongsum(num, n)==num){
        printf("%d is an armstrong number", num);
    }
    else {
        printf("%d is not an armstrong number.", num);
    }
    return 0;
}


#include <math.h>
int main() {
    int lower, upper, num, originalNum, remainder, n;
    double result;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    for (num = lower; num <= upper; num++) {
        originalNum = num;
        n = 0;
        result = 0.0;

        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        if ((int)result == num)
            printf("%d ", num);
    }
    return 0;
}

