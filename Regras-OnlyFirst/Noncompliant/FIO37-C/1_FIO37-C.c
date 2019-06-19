#include <stdio.h>
#include <string.h>
enum
{
    BUFFER_SIZE = 1024
};
void func5(void)
{
    char buf[BUFFER_SIZE];
    if (fgets(buf, sizeof(buf), stdin) == NULL)
    {
        /* Handle error */
    }
    buf[strlen(buf) - 1] = '\0';
}
