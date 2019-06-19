#include <stdlib.h>
void exit1(void)
{
    /* ... Cleanup code ... */
    return;
}
void exit2(void)
{
    int some_condition = 1;
    if (some_condition)
    {
        /* ... More cleanup code ... */
        exit(0);
    }
    return;
}
int main(void)
{
    if (atexit(exit1) != 0)
    {
        /* Handle error */
    }
    if (atexit(exit2) != 0)
    {
        /* Handle error */
    }
    /* ... Program code ... */
    return 0;
}
