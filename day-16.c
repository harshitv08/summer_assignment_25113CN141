#include <stdio.h>
int findMissingNumber(int arr[], int n){
    int totalSum = (n + 1) * (n + 2) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++)
    {
        actualSum = actualSum + arr[i];
    }
    return totalSum - actualSum;
}
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array: ");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int missing = findMissingNumber(arr, n);
    printf("Missing number: %d\n", missing);
    return 0;
}


#include <stdio.h>
int main() {
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[n];   
    int visited = -1;

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = visited; 
            }
        }
        if (freq[i] != visited) {
            freq[i] = count;
        }
    }

    int maxFreq = freq[0];
    int element = arr[0];
    for (int i = 1; i < n; i++) {
        if (freq[i] != visited && freq[i] > maxFreq) {
            maxFreq = freq[i];
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", element);
    printf("Frequency: %d\n", maxFreq);
    return 0;
}


#include <stdio.h>
void findPair(int arr[], int n, int target) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("no pair found with sum %d\n", target);
    }
}
int main() {
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target = 10;
    findPair(arr, n, target);
    return 0;
}


#include <stdio.h>
void removeDuplicates(int arr[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[i] == arr[j]) {
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; 
            } else {
                j++;
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("enter the size of the array: ");
    int arr[n];
    printf("enter the elements of the array: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    removeDuplicates(arr, n);
    return 0;
}
