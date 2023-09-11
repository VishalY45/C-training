#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
   
    int length = strlen(str);
    int start = 0;

    for (int end = 0; end <= length; end++) {
        if (str[end] == ' ' || str[end] == '\0') {
            for (int i = start, j = end - 1; i < j; i++, j--) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            start = end + 1;
        }
    }

    printf("Reversed string: %s\n", str);

    return 0;
}