#include <stdio.h>
#include <stdbool.h>
int transition(int currentState, char input) {
    switch (currentState) {
        case 0:
            if (input == 'a') return 1; 
            else return -1; 
        case 1:
            if (input == 'a') return 2; 
            else return -1; 
        case 2:
            return -1; 
        default:
            return -1;
    }
}

bool simulateDFA(const char *input) {
    int currentState = 0;
    int i = 0;

    while (input[i] != '\0') {
        currentState = transition(currentState, input[i]);

        if (currentState == -1) {
            return false; 
        }

        i++;
    }

    return currentState == 2;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (simulateDFA(input)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}

