#include <stdio.h>

int main() {
    char c;
    c = getchar();
    while (c != EOF) {
        printf("%c", c);
        c = getchar();
    }
    printf("%d", c);
    printf("FINISHED\n");
    return 0;
}
