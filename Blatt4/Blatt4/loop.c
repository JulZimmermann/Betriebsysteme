int sumA;
int sumB;
int sumErg;

void sum() {
    sumErg = sumA;
    for(int i = 0; i < sumB; i++) {
        sumErg += 1;
    }
}

int prodA;
int prodB;
int prodErg;

void produkt() {
    sumA = prodA;
    sumB = prodA;
    for(int i = 0; i < prodB-1; i++) {
        sum();
        sumA = sumErg;
    }
    prodErg = sumErg;
}

int powA;
int powB;
int powErg;

void pow() {
    powErg = 0;
    prodA = powA;
    prodB = powA;
    for(int i = 0; i < powB-1; i++) {
        sumA = powErg;
        produkt();
        powErg = prodErg;
        prodA = powErg;
    }
    
}

int main() {

    powA = 5;
    powB = 3;
    pow();

    int e = powErg;

    return 0;
}
