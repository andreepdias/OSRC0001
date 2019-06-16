
// Test library configuration for gtk.cfg
//
// Usage:
// $ cppcheck --check-library --enable=information --inconclusive --error-exitcode=1 --suppress=missingIncludeSystem --inline-suppr --library=gtk test/cfg/gtk.cpp
// =>
// No warnings about bad library configuration, unmatched suppressions, etc. exitcode=0
//

#include <gtk/gtk.h>

void validCode(int argInt)
{
    // if G_UNLIKELY is not defined this results in a syntax error
    if G_UNLIKELY(argInt == 1) {
    } else if (G_UNLIKELY(argInt == 2)) {
    }

    if G_LIKELY(argInt == 0) {
    } else if (G_LIKELY(argInt == -1)) {
    }

    printf("%s", _("test"));
    printf("%s", Q_("a|test"));
    printf("%s", N_("test"));

    gpointer gpt = g_malloc(4);
    printf("%p", gpt);
    g_free(gpt);
}

void g_malloc_test()
{
    // cppcheck-suppress leakReturnValNotUsed
    g_malloc(8);

    gpointer gpt = g_malloc(1);
    printf("%p", gpt);

    // cppcheck-suppress memleak
}
