#include <stdio.h>
#include <stdint.h>

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        uint32_t n;
        scanf("%u", &n);
        printf("%u\n", ~n);
    }
    return 0;
}