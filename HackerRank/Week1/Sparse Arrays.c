#include <stdio.h>
#include <string.h>

#define MAX 1000

typedef struct {
    char str[21];
    int count;
} WordCount;

int main() {
    int n, q;
    scanf("%d", &n);

    WordCount words[MAX];
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        char temp[21];
        scanf("%s", temp);
        int found = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (strcmp(words[j].str, temp) == 0) {
                words[j].count++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(words[uniqueCount].str, temp);
            words[uniqueCount].count = 1;
            uniqueCount++;
        }
    }

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        char query[21];
        scanf("%s", query);
        int found = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (strcmp(words[j].str, query) == 0) {
                printf("%d\n", words[j].count);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("0\n");
        }
    }

    return 0;
}
