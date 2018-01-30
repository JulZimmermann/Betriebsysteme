

int addInt(int n, int m) {
    return n+m;
}

int main() {

    int (*functionPtr)(int,int) = &addInt;

    int erg = functionPtr(1, 2);

    return 0;
}