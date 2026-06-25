#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 256  
char firstNonRepeatingChar(char *str){
    int count[CHAR_SIZE] = {0}; 
    int i;
    for (i = 0; str[i]; i++){
        count[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i]; i++){
        if (count[(unsigned char)str[i]] == 1){
            return str[i];
        }
    }
    return '\0';
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);

    char result = firstNonRepeatingChar(str);

    if (result){
        printf("the first non-repeating character is: %c\n", result);
    } else{
        printf("no non-repeating character found.\n");
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 256  
char firstRepeatingChar(char *str){
    int count[CHAR_SIZE] = {0}; 
    int i;

    for (i = 0; str[i]; i++){
        count[(unsigned char)str[i]]++;
        if (count[(unsigned char)str[i]] == 2){
            return str[i]; 
        }
    }
    return '\0';  
}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);

    char result = firstRepeatingChar(str);

    if (result){
        printf("the first repeating character is: %c\n", result);
    } 
    else{
        printf("no repeating character found.\n");
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CHAR_SIZE 256  
int areAnagrams(char *str1, char *str2){
    int count[CHAR_SIZE] = {0};
    int i;
    if (strlen(str1) != strlen(str2)){
        return 0;
    }
    for (i = 0; str1[i]; i++){
        count[(unsigned char)tolower(str1[i])]++;
    }
    for (i = 0; str2[i]; i++){
        count[(unsigned char)tolower(str2[i])]--;
    }
    for (i = 0; i < CHAR_SIZE; i++){
        if (count[i] != 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if (areAnagrams(str1, str2)){
        printf("the strings are anagrams.\n");
    } 
    else{
        printf("the strings are not anagrams.\n");
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
#define CHAR_SIZE 256  
char maxOccurringChar(char *str){
    int count[CHAR_SIZE] = {0}; 
    int i;
    int max = -1;
    char result;

    for (i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
        if (count[(unsigned char)str[i]] > max) {
            max = count[(unsigned char)str[i]];
            result = str[i];
        }
    }

    return result;
}
int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char result = maxOccurringChar(str);
    printf("the maximum occurring character is: %c\n", result);
    return 0;
}