#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i, len, flag = 0;
    printf("Enter a string: ");
    scanf("%s",str); 

    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]){
            flag = 1;
            break;
        }
    }

    if (flag == 0){
        printf("the string is a palindrome.\n");
    } else{
        printf("the string is not a palindrome.\n");
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    int i, count = 1; 
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == ' ') {
            count++;
        }
    }
    printf("number of words in the sentence: %d\n", count);
    return 0;
}


#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    int freq[256] = {0};
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++){
        freq[(unsigned char)str[i]]++;
    }

    printf("\ncharacter frequencies:\t");
    for (i = 0; i < 256; i++){
        if (freq[i] != 0){
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
int main(){
    char str[200], result[200];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] != ' '){
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 
    printf("string without spaces: %s\n", result);
    return 0;
}