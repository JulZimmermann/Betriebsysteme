#include <stdio.h>

int main() {

    int fr = facRec(5);
    int fi = facIt(5);

    return 0;
}

int facRec(int n ) {
    if(n > 1) {
        return n * facRec(n-1);
    }
   return 1;
}

int facIt(int n) {
    int summ = 1;

    for(int i = 1; i <= n; i++) {
        summ *= i;
    }

    return summ;
}