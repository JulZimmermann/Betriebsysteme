#include <stdio.h>

typedef struct Fraction {
    int devider;
    int devisor;
} Fraction;

void readFraction(Fraction* fraction) {
    scanf ("%d",&fraction->devider);
}

void printFraction(Fraction* fraction) {
    printf("%d/%d", fraction->devider, fraction->devisor);
}

Fraction* addFractions(Fraction *first, Fraction *second) {

}

int main() {

    return 0;
}