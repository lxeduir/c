#include<stdio.h> 
void main() {
    char ch;
    int i;
    for (i = 0; i < 10; i++) {
        ch = getchar();
        if ((ch >= 'a') && (ch <= 'z')) {
            ch = ch - 32;
        }
        putchar(ch);
    }
}