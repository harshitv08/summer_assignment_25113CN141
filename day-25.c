#include <stdio.h>
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2){
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1){
        merged[k++] = arr1[i++];
    }

    while (j < n2){
        merged[k++] = arr2[j++];
    }
}
int main(){
    int n1;
    printf("enter the size of first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter the elements of first array here: ");
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    int n2;
    printf("enter the size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter the elements of second array here: ");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int merged[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 256  
void findCommonChars(char str1[], char str2[]) {
    bool present1[MAX] = {false};
    bool present2[MAX] = {false};

    for (int i = 0; str1[i] != '\0'; i++){
        present1[(unsigned char)str1[i]] = true;
    }

    for (int i = 0; str2[i] != '\0'; i++){
        present2[(unsigned char)str2[i]] = true;
    }

    printf("Common characters: ");
    for (int i = 0; i < MAX; i++){
        if (present1[i] && present2[i]){
            printf("%c ", i);
        }
    }
    printf("\n");
}
int main(){
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    findCommonChars(str1, str2);
    return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char names[50][100], temp[100];
    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); 

    printf("Enter %d names (full names allowed):\n", n);
    for (int i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; 
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (strcmp(names[i], names[j]) > 0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char words[50][50], temp[50];

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%s", words[i]);
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (strlen(words[i]) > strlen(words[j]) ||
               (strlen(words[i]) == strlen(words[j]) && strcmp(words[i], words[j]) > 0)) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++){
        printf("%s\n", words[i]);
    }

    return 0;
}
