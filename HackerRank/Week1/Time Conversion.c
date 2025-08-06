#include <stdio.h>

int toInt(char a, char b) {
    return (a - '0') * 10 + (b - '0');
}

void intToChar2(int num, char* dest) {
    dest[0] = (num / 10) + '0';
    dest[1] = (num % 10) + '0';
}

int main() {
    char input[11];   
    char output[9];   

    scanf("%10s", input);

    int hour = toInt(input[0], input[1]);
    int minute = toInt(input[3], input[4]);
    int second = toInt(input[6], input[7]);
    int isPM = (input[8] == 'P');

    if (isPM && hour != 12) {
        hour += 12;
    } else if (!isPM && hour == 12) {
        hour = 0;
    }
    intToChar2(hour, &output[0]);
    output[2] = ':';
    intToChar2(minute, &output[3]);
    output[5] = ':';
    intToChar2(second, &output[6]);
    output[8] = '\0';
    printf("%s\n", output);

    return 0;
}
