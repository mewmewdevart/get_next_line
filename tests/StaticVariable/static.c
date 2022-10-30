#include <stdio.h>

void printf_var(void);

int main (void)
{
    printf_var();
    printf_var();
    printf_var();
    printf_var();
    return (0);
}

void printf_var(void)
{
    int i_tmp = 0;
    static int i = 0;

    i = i + 1; //terá o resultado alterado a cada rechamada da função
    i_tmp = i_tmp + 1; //terá o seu valor fixo a cada rechamada da função

    printf("i_imp: %d e i = %d\n", i_tmp, i);
}