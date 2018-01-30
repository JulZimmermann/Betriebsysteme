#include <stdio.h>

int overflow(int x) {
    static int summ = 0;

    summ += x;
    int div = summ / 10;
    summ %= 10;

    return div;
}

int main() {

    printf("%d\n",overflow(5));
    printf("%d\n",overflow(6));
    printf("%d\n",overflow(12));
    printf("%d\n",overflow(7));
    printf("%d\n",overflow(2));

    return 0;
}