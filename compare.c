#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (*s == *t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

// OK, so even if you type the same strings, it will say it's different BECAUSE...
// we're actually comparing the chars at different memory addresses.
// Remember, variables "s" and "t" are just pointers to the address of the first char of the string
// THAT is why when comparing (if statement), we need the "*" to give us the VALUE at the location s and t are point to.
// Could use strcmp (with string.h module included). Would be "if (strcomp(s, t) == 0)".
// In video, David only uses strcmp to make the comparison work. I guessed (correctly!) that including
// the "*" to the pointers s and t would also work.