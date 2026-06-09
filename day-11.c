#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b,c;
    printf("enter the first number here: ");
    scanf("%d",&a);
    printf("enter the second number here: ");
    scanf("%d",&b);

    c=sum(a,b);
    printf("the summ of the given two numbers is %d",c);
    return 0;
}


#include <stdio.h>
int maxi(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b,c;
    printf("enter the first number here: ");
    scanf("%d",&a);
    printf("enter the second number here: ");
    scanf("%d",&b);

    c=maxi(a,b);
    printf("the maximum of the given numbers is %d",c);
    return 0;
}


#include <stdio.h>
int aprime(int a){
    int i;
    for(i=2;i<=a-1;i++){
        if (a%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int a;
    printf("enter the number here: ");
    scanf("%d",&a);
    if (aprime(a)){
        printf("the given number is prime.");
    }
    else {
        printf("the given number is not prime.");
    }
    return 0;
}


#include <stdio.h>
int fact(int a){
    int i, mult=1;
    for(i=1;i<=a;i++){
        mult=mult*i;
    }
    return mult;
}
int main(){
    int a,b;
    printf("enter the number here: ");
    scanf("%d",&a);
    
    printf("the factorial of the given number is %d",fact(a));
    return 0;
}