#include <stdio.h>
int main(){
    int i, j, n;
    printf("enter the number of rows here: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i, j, n;
    printf("enter the number here ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i, n, j;
    char ch;
    printf("enter the number here ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        ch='A';
        for(j=1;j<=i;j++){
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i, n, j;
    printf("enter the number here ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}