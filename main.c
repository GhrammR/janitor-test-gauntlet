#include <stdio.h>
int main() {
    char buf[50];
    gets(buf); // security:gets_unsafe_input
    return 0;
}
