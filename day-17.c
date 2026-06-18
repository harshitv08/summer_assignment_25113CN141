#include <stdio.h>
int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, j;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of the first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}


#include <stdio.h>
int main() {
    int arr1[50], arr2[50], unionArr[100];
    int n1, n2, i, j, k = 0, flag;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of the first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

    for(i = 0; i < n2; i++) {
        flag = 0;
        for(j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of the two arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    return 0;
}


#include <stdio.h>
int main() {
    int arr1[50], arr2[50], interArr[50];
    int n1, n2, i, j, k = 0, flag;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of the first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                flag = 0;
                for(int m = 0; m < k; m++) {
                    if(interArr[m] == arr1[i]) {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0) {
                    interArr[k++] = arr1[i];
                }
            }
        }
    }

    printf("Intersection of the two arrays:\n");
    if(k == 0) {
        printf("No common elements.\n");
    } else {
        for(i = 0; i < k; i++) {
            printf("%d ", interArr[i]);
        }
    }
    return 0;
}


#include <stdio.h>
int main() {
    int arr1[50], arr2[50], common[50];
    int n1, n2, i, j, k = 0, flag;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of the first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                flag = 0;
                for(int m = 0; m < k; m++) {
                    if(common[m] == arr1[i]) {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0) {
                    common[k++] = arr1[i];
                }
            }
        }
    }

    printf("Common elements in both arrays:\n");
    if(k == 0) {
        printf("No common elements.\n");
    } else {
        for(i = 0; i < k; i++) {
            printf("%d ", common[i]);
        }
    }
    return 0;
}
