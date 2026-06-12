#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main(){
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = linearSearch(arr, n, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    if (count > 0) {
        printf("Frequency of %d = %d\n", key, count);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -1; // assume no second largest initially

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;   // update second largest
            largest = arr[i];   // update largest
        } else if (arr[i] < largest && (second == -1 || arr[i] > second)) {
            second = arr[i];    // update second largest
        }
    }

    if (second == -1) {
        printf("No second largest element (all elements are equal).\n");
    } else {
        printf("Second largest element = %d\n", second);
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0; 

    printf("Duplicate elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                found = 1;
                break; 
            }
        }
    }

    if (!found) {
        printf("No duplicates found.\n");
    }
    return 0;
}
