#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // needed for toupper function

int main(void)
{
    char *s = get_string("s: ");

    // char *t = s; // so this basically defines t as the same ADDRESS of s, not copying the value. Doesn't work for copying strings

    char *t = malloc(strlen(s) + 1); // it's + 1 to include the nul (\0) char
    // malloc is a function in <stdlib.h>, means memory allocation
    if (t == NULL) // FYI "nul" = \0 and is for chars, NULL is for pointers
    {
        return 1;
    }

    // BELOW we basically create a loop to copy each char from s to t (rather than just copying the address)
    for (int i = 0, n = strlen(s); i <= n; i++) // <= to n rather than just < because of the nul char again
    // WATCHOUT HERE - he declares type int for i and n, using COMMA, not semicolon
    {
        t[i] = s[i];
    }

    // NOTE - there is already a common function for this - strcpy(t, s);

    if (strlen(t) > 0) // this is just to check that the string isn't blank
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // this is GOOD PRACTICE - to FREE the memory we had previoulsy allocated (with malloc)
            // using this function "free"
}