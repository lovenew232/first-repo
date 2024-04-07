//2.palindrome check

#include<stdio.h>

#include <string.h>

int main() {
    char string[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    //fgets(string, 100, stdin);
    gets(string);

    // Remove trailing newline, if any
    length = strlen(string);

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
            flag = 1;
            printf("Its not a palindrome.");
            break;
        }
    }

    if (flag == 0) {
        printf("Its a palindrome.\n");
    }

    return 0;
    }