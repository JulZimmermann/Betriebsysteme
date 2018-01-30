#include <stdio.h>

int main() {

    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }

    scanf("%d", "");

    return 0;
}