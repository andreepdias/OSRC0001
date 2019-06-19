#include <time.h>
void func7(struct tm *time_tm)
{
    char *time = asctime(time_tm);
    /* ... */
}
