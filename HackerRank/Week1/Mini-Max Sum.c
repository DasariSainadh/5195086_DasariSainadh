#include <stdio.h>
#include <limits.h> 

int main() {
    long long arr[5];
    long long total = 0;
    long long min = LLONG_MAX;
    long long max = LLONG_MIN;
    for (int i = 0; i < 5; i++) {
        scanf("%lld", &arr[i]);
        total += arr[i];

        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    long long min_sum = total - max; 
    long long max_sum = total - min; 

    printf("%lld %lld\n", min_sum, max_sum);

    return 0;
}
