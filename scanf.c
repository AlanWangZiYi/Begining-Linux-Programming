#include <stdio.h>

int main(void)
{
    char s[256];
    int n;
    float f;
    char c;

    scanf("Hello, %d, %g, %c, %[^.]", &n, &f, &c, s);

    printf("Hello, %d, %f, %c, %s", n, f, c, s);

    return 0;
}