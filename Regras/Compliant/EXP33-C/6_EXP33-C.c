#include <stdio.h>
void report_error(const char *msg)
{
    printf("Error: %s\n", msg);
}
int main(void)
{
    if (do_auth() == -1)
    {
        report_error("Unable to login");
    }
    return 0;
}