#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isS(char *str);

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
    if (str[0] == '\0') {
        return true;
    }
    if (str[0] == '0' && str[strlen(str) - 1] == '0') {
        return isS(str + 1) && isS(str + 2);
    }

    if (str[0] == '1' && str[strlen(str) - 1] == '1') {
        return isS(str + 1) && isS(str + 2);
    }
    if ((str[0] == '0' || str[0] == '1') && str[1] == '\0') {
        return true;
    }
    return false;
}

