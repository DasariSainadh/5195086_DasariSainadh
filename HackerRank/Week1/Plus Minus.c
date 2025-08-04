#include <stdio.h>

void calculateRatios(int n, int arr[]) {
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }
    printf("%.6f\n", (double)pos / n);
    printf("%.6f\n", (double)neg / n);
    printf("%.6f\n", (double)zero / n);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculateRatios(n, arr);

    return 0;
}
