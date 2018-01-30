int fibu(int x) {
    if(x < 2) {
        return 1;
    }
    return fibuRec(x-1) + fibuRec(x-2);
}

int main(int argc, char* arg[]) {

    int fr = fibu(4);

    return 0;
}
