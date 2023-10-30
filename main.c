#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"

int main(void)
{
    unsigned int u = 1;
    int d = 2;
    int x = -1;
    char *s = "salut";
    char c = 'a';
    int g = 5;

    printf("%-+d\n", d);
    printf("%+ -d\n", d);
    printf("%-+u\n", u);
    printf("%-+x\n", x);
    printf("%-+s\n", s);
    printf("%-c\n", c);
    printf("%-Z\n\n");
    ft_printf("%-+d %-+d %-Z\n", d, g);
}