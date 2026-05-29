#include <stdio.h>
int main(){
    int a,sum=0,rem;
    printf("enter the number here:\t");
    scanf("%d",&a);
    while(a!=0){
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("the sum of the digits of the given number is:\t%d",sum);
    return 0;
}

int main(){
    int a,rev=0,rem;
    printf("enter the number here:\t");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("the reverse of the given number is:\t%d",rev);
    return 0;
}

int main(){
    int a,mult=1,rem;
    printf("enter the number here:\t");
    scanf("%d",&a);
    while(a!=0){
        rem=a%10;
        mult=mult*rem;
        a=a/10;
    }
    printf("the product of the digits of the givern number is:\t%d",mult);
    return 0;
}


int main(){
    int n,rev=0,rem;
    printf("enter the number here:\t");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if (rev==n)
    {
        printf("the given number is a palindrome");
    }
    else
    {
        printf("the givern number is not a palindrome");
    }
    return 0;
}