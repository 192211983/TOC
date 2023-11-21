#include <stdio.h>
#include <stdbool.h>
bool isLanguageString(char str[], int index);
bool isProductionS(char str[], int *index);
bool isProductionA(char str[], int *index);

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    int index = 0;
    if (isLanguageString(input, &index) && input[index] == '\0') {
        printf("String belongs to the language.\n");
    } else {
        printf("String does not belong to the language.\n");
    }

    return 0;
}

bool isLanguageString(char str[], int *index) {
    if (isProductionS(str, index)) {
        return true;
    }
	    else if (isProductionA(str, index)) {
        return true;
    }

    return false;
}

bool isProductionS(char str[], int *index) {
    if (str[*index] == '0') {
        (*index)++;
        if (isLanguageString(str, index)) {
            if (str[*index] == '0') {
                (*index)++;
                return true;
            }
        }
    }
    return false;
}

bool isProductionA(char str[], int *index) {
    if (str[*index] == '1') {
        (*index)++;
        if (isLanguageString(str, index)) {
            return true;
        }
    }
    return true;
}

