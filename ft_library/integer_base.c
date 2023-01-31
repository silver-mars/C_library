#include "libft.h"

int main(void)
{
    int a;
    int b;

    a = 077; // восьмеричное число. 0 в начале.
    b = 0x1F; // шестнадцатиричное число. 0x в начале.
    printf("%d %o %x %X\n", a,a,a,a);
    printf("%d %o %x %X\n", b,b,b,b);
    return (0);
}
