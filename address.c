#include <stdio.h>

int main(void)
{
    // This basically shows us (visually) that chars in a string are back to back in memory storage
    // Also demonstrates why we only need to know the location of the first char in a string
    // The "\0" that C automatically adds to the end of every string signifies the end of the string in memory, so
    // no need to know or tell where (in memory) the string ends.
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1)); // Can do this instead of [] notation
    printf("%c\n", *(s+2));
}

// ***SO... "string" is a synonym for "char *". The cs50 library (<cs50.h>) that we include basically
// abstracts away char * into the data type "string".

// ------------WITH INTEGERS------------
//int main(void)
//{
    //int n = 50;
    //int *p = &n; // *p is a pointer, it points to a variable's address (&n)
    //printf("%i\n", *p); // in this case the "*" isn't a pointer, it's saying GO TO the value at this address.

    // & placed before a variable tells c to tell you the address of the variable (where it's stored)
    // &i becomes %p if using & to find the address of a variabl
//}