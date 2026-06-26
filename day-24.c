#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isRotation(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2 || len1 == 0){
        return false;
    }

    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    return strstr(temp, str2) != NULL;
}

int main(){
    char str1[100],str2[100];
    printf("enter the first string: ");
    scanf("%s",str1);
    printf("enter the second string: ");
    scanf("%s",str2);

    if (isRotation(str1, str2)){
        printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
    } 
    else{
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
void compressString(const char *str){
    int len = strlen(str);
    int count = 1;
    char compressed[2 * len + 1];
    int index = 0;
    for (int i = 0; i < len; i++){
        if (i < len - 1 && str[i] == str[i + 1]){
            count++;
        } 
        else{
            compressed[index++] = str[i];
            index += sprintf(&compressed[index], "%d", count);
            count = 1;
        }
    }
    compressed[index] = '\0'; 

    if (strlen(compressed) < len){
        printf("compressed string: %s\n", compressed);
    } 
    else{
        printf("compressed string is not shorter. Original string: %s\n", str);
    }
}
int main() {
    char str[100];
    printf("enter a string: ");
    scanf("%s", str);

    compressString(str);
    return 0;
}


#include <stdio.h>
#include <string.h>
void findLongestWord(const char *str){
    int maxLen = 0, currentLen = 0;
    char longest[100], current[100];
    int i = 0, j = 0;

    while (str[i] != '\0'){
        if (str[i] != ' '){
            current[j++] = str[i];
            currentLen++;
        } 
        else{
            current[j] = '\0';
            if (currentLen > maxLen) {
                maxLen = currentLen;
                strcpy(longest, current);
            }
            j = 0;
            currentLen = 0;
        }
        i++;
    }

    current[j] = '\0';
    if (currentLen > maxLen){
        maxLen = currentLen;
        strcpy(longest, current);
    }

    printf("longest word: %s\n", longest);
    printf("length: %d\n", maxLen);
}
int main(){
    char str[200];
    printf("enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    findLongestWord(str);
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void removeDuplicates(char *str){
    int len = strlen(str);
    bool seen[256] = {false}; 
    int index = 0;

    for (int i = 0; i < len; i++){
        unsigned char ch = str[i];
        if (!seen[ch]){
            seen[ch] = true;
            str[index++] = ch;
        }
    }
    str[index] = '\0'; 
}
int main(){
    char str[200];
    printf("enter a string: ");
    scanf("%s", str);

    removeDuplicates(str);
    printf("string after removing duplicates: %s\n", str);
    return 0;
}