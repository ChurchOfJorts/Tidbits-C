#include <stdio.h>

int main(void)
{
    int i = 2;
    float f = 3.14;
    char *s = "Hello, world!";  // char * ("char pointer") is the string type
    int x = 78;

    if (x) {
        printf("%s  i = %d and f = %f!\n", s, i, f);
        printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");
    }
}