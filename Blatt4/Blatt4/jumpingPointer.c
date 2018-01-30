#include <stdbool.h>
#include <stdio.h>

void fillArray(bool val, bool* arr, int arrc) {
    for(int i = 0; i < arrc; i++) {
        arr[i] = val;
    }
}

int main() {

    int k = 0;
    int arr[] = { 2, 3, -1, 2, -1 };
    int arrc = sizeof(arr) / sizeof(int);

    bool visited[arrc];
    fillArray(false, visited, arrc);

    int count = 0;
    while(k < arrc) {

        if(visited[k]) {
            return -1;
        }

        visited[k] = true;

        k = k + arr[k];
        count++;
    }

    printf("Jumped %d times", count);

    return 0;
}