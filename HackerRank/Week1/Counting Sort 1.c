#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int freq_arr[100] = {0};
    int num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        freq_arr[num]++;
    }

    for (int i = 0; i < 100; i++) {
        printf("%d ", freq_arr[i]);
    }
    printf("\n");

    return 0;
}