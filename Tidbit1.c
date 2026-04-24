#include <stdio.h>

int main(void)
{
    int i = 2;
    float f = 3.14;
    char *s = "Hello, world!";  // char * ("char pointer") is the string type
    bool x = true;

    if (x) {
        printf("%s  i = %d and f = %f!\n", s, i, f);
    }
}