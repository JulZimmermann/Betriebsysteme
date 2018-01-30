#include <stdbool.h>

bool isPermutation(const char* a, const char* b) {

    const int size = 'z'-'a';

    int alphabet[size] = { 0 };

    for(int i = 0; a[i] != '\0'; i++) {
        alphabet[a[i] - 'a']++;
    }

    for(int i = 0; b[i] != '\0'; i++) {
        alphabet[b[i] - 'a']--;
    }

    for(int i = 0; i < size; i++) {
        if(alphabet[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    bool b1 = isPermutation("hello", "lehol");
    bool b2 = isPermutation("hello", "lehho");

    return 0;
}
