#include<stdio.h>

void hexCounting(int start, int end, int increment);



int main() {

    int start, end, increment;
    scanf("%d %d %d", &start, &end, &increment);
    hexCounting(start, end, increment);

    return 0;
}

void hexCounting(int start, int end, int increment) {
    for(int i=start; i<=end; i+=increment) {
        printf("%x ", i);
    }
}
