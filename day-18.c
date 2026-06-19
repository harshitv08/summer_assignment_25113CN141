#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements: ");
    for( int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Unsorted array: ");
    printArray(arr, n);

    bubbleSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}


#include <stdio.h>
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int n;
    printf("enter the number of elemets: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements: ");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Unsorted array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}


#include <stdio.h>
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int target = 25;

    int result = binarySearch(arr, n, target);

    if (result != -1){
        printf("Element %d found at index %d\n", target, result);
    }
    else {
        printf("Element %d not found in array\n", target);
    }
    return 0;
}


#include <stdio.h>
void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements: ");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Original array: ");
    printArray(arr, n);

    sortDescending(arr, n);

    printf("Array sorted in descending order: ");
    printArray(arr, n);
    return 0;
}
