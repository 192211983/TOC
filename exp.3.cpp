#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isS(char *str);
bool isA(char *str);

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (isS(input)) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }

    return 0;
}
bool isS(char *str) {
    if (str[0] == '0' && str[strlen(str) - 1] == '1') {
        return isA(str + 1);
    } else {
        return false;
    }
}
bool isA(char *str) {
    if (str[0] == '\0') {
        return true;
    }
    if (str[0] == '0') {
        return isA(str + 1);
    }
        if (str[0] == '1') {
        return isA(str + 1);
    }
    
    return false;
}

