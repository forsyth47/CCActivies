#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    printf("Enter the word to check for palindrome: ");
    scanf("%s", word);
    int length = strlen(word);
    int isPalindrome = 1;
    

    for (int i = 0; i < length; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("'%s' is %s palindrome.\n", word, isPalindrome ? "" : "not a");
    return 0;
}
