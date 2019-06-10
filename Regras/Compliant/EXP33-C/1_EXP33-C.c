#include <stdio.h>

/* (82) Local, automatic variables assume unexpected values if they are read before they are initialized. */

int main(){

    int a;
    int b = 1;

    printf("%d\n", is_negative(a));
    printf("%d\n", is_negative(b));

}

void set_flag(int number, int *sign_flag)
{
    if (NULL == sign_flag)
    {
        return;
    }
    /* Account for number being 0 */
    if (number >= 0)
    {
        *sign_flag = 1;
    }
    else
    {
        *sign_flag = -1;
    }
}
int is_negative(int number)
{
    int sign = 0; /* Initialize for defense-in-depth */
    set_flag(number, &sign);
    return sign < 0;
}