#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int countExclamations(const char* str) {
    int count = 0;
    for(int i = 0; str[i] != '\n'; ++i) {
        if(str[i] == '!') {
            count++;
        }
    }

    return count;
}

char converteChar(char c, bool ignored) {
    if(!ignored) {
        if(c >= 'a' && c <= 'z') {
            return c - ('a' - 'A');
        }

        if(c >= 'A' && c <= 'Z') {
            return c + ('a' - 'A');
        }
    }

    return c;
}

void checkForExclamation(char c, int* count, int numberOfExclamations) {
    if(numberOfExclamations > 1) {
        if(c == '!') {
            (*count)++;
        }
    }
}

void converte(const char* from, char* to) {
    to[strlen(from)] = '\0';

    int numberOfExclamations = countExclamations(from);
    
    int exclamationCount = 0;
    bool ignored = false;
    for(int i = 0; from[i] != '\0'; ++i) {
        to[i] = converteChar(from[i], ignored);
        
        checkForExclamation(from[i], &exclamationCount, numberOfExclamations);
        ignored = exclamationCount >= 1 && exclamationCount < numberOfExclamations;
    }
}

int main() {
    const char* str = "hallo!x!yz!Hallo";

    char newStr[strlen(str)+1];

    converte(str, newStr);    

    printf("%s\n", str);
    printf("%s\n", newStr);

    return 0;
}