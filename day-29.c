#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n--- Menu Driven Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting calculator...\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                printf("Result = %.2lf\n", result);
                break;
            case 5:
                printf("Result = %d\n", (int)num1 % (int)num2);
                break;
            case 6:
                result = pow(num1, num2);
                printf("Result = %.2lf\n", result);
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}


#include <stdio.h>
#define MAX 100

void inputArray(int arr[], int *n) {
    printf("Enter number of elements: ");
    scanf("%d", n);
    printf("Enter %d elements:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sumAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);
}

void largestSmallest(int arr[], int n) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);
}

void searchElement(int arr[], int n) {
    int key, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) printf("Element not found.\n");
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted successfully!\n");
    displayArray(arr, n);
}

int main() {
    int arr[MAX], n = 0, choice;

    while (1) {
        printf("\n--- Menu Driven Array Operations ---\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Sum and Average\n");
        printf("4. Largest and Smallest\n");
        printf("5. Search Element\n");
        printf("6. Sort Array\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputArray(arr, &n); break;
            case 2: displayArray(arr, n); break;
            case 3: sumAverage(arr, n); break;
            case 4: largestSmallest(arr, n); break;
            case 5: searchElement(arr, n); break;
            case 6: sortArray(arr, n); break;
            case 7: printf("Exiting program...\n"); return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void stringLength(char str[]) {
    printf("Length of string: %d\n", (int)strlen(str));
}

void stringReverse(char str[]) {
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void checkPalindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

void stringCompare(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
}

void stringConcat(char str1[], char str2[]) {
    char result[MAX];
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string: %s\n", result);
}

void toUpperCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase string: %s\n", str);
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase string: %s\n", str);
}

int main() {
    char str1[MAX], str2[MAX];
    int choice;

    while (1) {
        printf("\n--- Menu Driven String Operations ---\n");
        printf("1. String Length\n");
        printf("2. String Reverse\n");
        printf("3. Palindrome Check\n");
        printf("4. String Compare\n");
        printf("5. String Concatenate\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter string: ");
                scanf("%s", str1);
                stringLength(str1);
                break;
            case 2:
                printf("Enter string: ");
                scanf("%s", str1);
                stringReverse(str1);
                break;
            case 3:
                printf("Enter string: ");
                scanf("%s", str1);
                checkPalindrome(str1);
                break;
            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                stringCompare(str1, str2);
                break;
            case 5:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                stringConcat(str1, str2);
                break;
            case 6:
                printf("Enter string: ");
                scanf("%s", str1);
                toUpperCase(str1);
                break;
            case 7:
                printf("Enter string: ");
                scanf("%s", str1);
                toLowerCase(str1);
                break;
            case 8:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}


#include <stdio.h>
#include <string.h>
#define MAX 100

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

void addItem(struct Item items[], int *count) {
    if (*count >= MAX) {
        printf("Inventory is full!\n");
        return;
    }

    printf("Enter item ID: ");
    scanf("%d", &items[*count].id);
    printf("Enter item name: ");
    scanf("%s", items[*count].name);
    printf("Enter quantity: ");
    scanf("%d", &items[*count].quantity);
    printf("Enter price: ");
    scanf("%f", &items[*count].price);

    (*count)++;
    printf("Item added successfully!\n");
}

void displayItems(struct Item items[], int count) {
    if (count == 0) {
        printf("No items in inventory.\n");
        return;
    }

    printf("\n--- Inventory List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
               items[i].id, items[i].name, items[i].quantity, items[i].price);
    }
}

void searchItem(struct Item items[], int count) {
    int id, found = 0;
    printf("Enter item ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            printf("Item found: ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
                   items[i].id, items[i].name, items[i].quantity, items[i].price);
            found = 1;
            break;
        }
    }

    if (!found) printf("Item not found.\n");
}

void updateStock(struct Item items[], int count) {
    int id, qty, found = 0;
    printf("Enter item ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            printf("Enter new quantity: ");
            scanf("%d", &qty);
            items[i].quantity = qty;
            printf("Stock updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) printf("Item not found.\n");
}

void deleteItem(struct Item items[], int *count) {
    int id, found = 0;
    printf("Enter item ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
        if (items[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                items[j] = items[j + 1];
            }
            (*count)--;
            printf("Item deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) printf("Item not found.\n");
}

int main() {
    struct Item items[MAX];
    int count = 0, choice;

    while (1) {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Stock\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addItem(items, &count); break;
            case 2: displayItems(items, count); break;
            case 3: searchItem(items, count); break;
            case 4: updateStock(items, count); break;
            case 5: deleteItem(items, &count); break;
            case 6: printf("Exiting system...\n"); return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}
