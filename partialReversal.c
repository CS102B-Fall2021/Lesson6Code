#include <stdio.h>
#include <string.h>

void partialReversal(char s[], int start, int end);

int main() {
    char s[100];
    int start, end;
    scanf("%s %d %d", s, &start, &end);

    partialReversal(s, start, end);

    printf("%s", s);

    return 0;
}

void partialReversal(char s[], int start, int end) {
    for (int i=start, j=end; i<j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
