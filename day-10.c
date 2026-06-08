#include <stdio.h>
int main(){
    int i,j,n,space;
    printf("enter the number of rows here ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
int main(){
    int i,j,n,space;
    printf("enter the number of rows here ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
int main(){
    int i,j,n,space;
    printf("enter the number of rows here ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d", j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i,j,n,space;
    char ch;
    printf("enter the number of rows here ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        ch='A';
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c", ch+j-1);
        }
        for(j=i-1;j>=1;j--){
            printf("%c", ch+j-1);
        }
        printf("\n");
    }
    return 0;
}