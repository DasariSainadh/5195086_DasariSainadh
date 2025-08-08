#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int freq = 0;
    char ch;
    
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (isalpha(ch)) {
            
            freq |= (1 << (tolower(ch) - 'a'));
        }
    }
    
    
    if (freq == 0x3FFFFFF){ 
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }
    
    return 0;
}