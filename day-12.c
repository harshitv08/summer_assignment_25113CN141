#include <stdio.h>
int heypalindrome(int n){
    int original=n,rem,rev=0;
    while (n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return (original==rev);
}
int main(){
    int num;
    printf("enter the number here ");
    scanf("%d",&num);
    
    if (heypalindrome(num)){
        printf("it is a palindrome number.");
    }
    else{
        printf("it is not a palindrome number.");
    }
    return 0;
}


#include <stdio.h>
#include <math.h>
int heyarmstrong(int n){
    int count=0, rem, original=n, result=0;
    while (original!=0){
        original/=10;
        ++count;
    }
    original=n;
    while (original!=0){
        rem=original%10;
        result+=pow(rem,count);
        original/=10;
    }
    return (int)result==n;
}
int main(){
    int num;
    printf("enter the number here ");
    scanf("%d", &num);
    
    if (heyarmstrong(num)){
        printf("it is an armstrong number.");
    }
    else{
        printf("it is not an armstrong number.");
    }
    return 0;
}


#include <stdio.h>
int fib(int a, int b, int n){
    int result, i;
    printf("fibonacci series %d upto %d:",a,n);
    for(i=0;i<=n;i++){
        printf("%d",a);
        result=a+b;
        a=b;
        b=result;
    }
    printf("\n");
}
int main(){
    int a,b,c;
    printf("enter the first term of the series here ");
    scanf("%d",&a);
    printf("enter the second term of the series here ");
    scanf("%d",&b);
    printf("enter the total number of terms here ");
    scanf("%d",&c);
    
    fib(a,b,c);
    return 0;
}


#include <stdio.h>
int heyperfect(int n){
    int i, sum=0;
    for(i=1;i<=n/2;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    return sum==n && n!=0;
}
int main(){
    int num;
    printf("enter the number here ");
    scanf("%d",&num);
    
    if (heyperfect(num)){
        printf("it is a perfect number.");
    }
    else{
        printf("it is not a perfect number.");
    }
    return 0;
}