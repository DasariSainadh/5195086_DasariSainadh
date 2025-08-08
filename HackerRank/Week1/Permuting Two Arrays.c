#include <stdio.h>
#include <stdlib.h>

int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n], b[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    qsort(a, n, sizeof(int), compare_asc);
    qsort(b, n, sizeof(int), compare_desc);

    int is_possible = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] + b[i] < k) {
            is_possible = 0;
            break;
        }
    }

    if (is_possible) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        solve();
    }
    return 0;
}