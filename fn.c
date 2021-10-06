#include <stdio.h>
#include <string.h>

void print100times(char s[]);
double secretOfLife(int age);

int main() {
    print100times("I love chocolate!\n");
    double secret = secretOfLife(18);
    printf("%f", secret);
    return 0;
}

void print100times(char s[]) {
    
    // a = a+1;
    for (int a=0; a<100; ++a) {
        //printf("%s", s);
        //for (int i=0; i<strlen(s); i++) {
        for (int i=0; s[i]!='\0'; i++) {
            printf("%c", s[i]);
        }
    }

}

double secretOfLife(int age) {
    double secret = 3.0*2.5/age*2.718;
    return secret;
}
