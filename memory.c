#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(4); // If I only allocated 3 instead of 4, valgrind would show that I have memory loss.
    s[0] = 'H';
    s[1] = 'I';
    s[2] = '!';
    s[3] = '\0';
    printf("%s\n", s);
    free(s);
}

// change malloc(4) to malloc(3) and then run valgrind ./memory