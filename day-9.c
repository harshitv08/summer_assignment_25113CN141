#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter the number of rows here: ");
    scanf("%d", &n);
    
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter the number of rows here: ");
    scanf("%d", &n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i,j,n;
    char ch;
    printf("enter the number of rows here: ");
    scanf("%d", &n);

    ch='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}


#include <stdio.h>
int main(){
    int r,c,n;
    printf("enter the number of rows here ");
    scanf("%d", &n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            if (r==1||c==n||r==n||c==1){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}