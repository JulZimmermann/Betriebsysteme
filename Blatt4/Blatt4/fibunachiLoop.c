int sumA;
int sumB;
int erg;

int fibu(int x1) {
    x1--;
    int x0 = 0;
    int x2 = 1;
    int x3 = 1;

    for(int i = x1; i > 0; i--) {
        sumA = x2;
        sumB = x3;
        add();
        x0 = erg;
        x2 = x3;
        x3 = x0;
    }

    return x3;
}

int add() {
    erg = sumA;
    for(int i = 0; i < sumB; i++) {
        erg += 1;
    }
}

int main() {
    int fr = fibu(4);

    return 0;
}
