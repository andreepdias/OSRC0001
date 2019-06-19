#include <stdio.h>

/* (82) Local, automatic variables assume unexpected values if they are read before they are initialized. */

int test(){

    int a = -1;
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
    if (number > 0)
    {
        *sign_flag = 1;
    }
    else if (number < 0)
    {
        *sign_flag = -1;
    }
}

int is_negative(int number)
{
    int sign;
    set_flag(number, &sign);
    return sign < 0;
}
