#include <stdio.h>
#include <pthread.h>

void* hello(void* countV) {
    int count = (int) countV;
    for(int i = 0; i < count; i++) {
        printf("%d\n", i);
    }
}

int main() {

    const int threadCount = 100;

    pthread_t threads[threadCount];

    for(int i = 0; i < threadCount; i++) {
        pthread_create(&threads[i], NULL, hello, (void*)i);
    }

    return 0;
}