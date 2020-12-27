#include <stdio.h>

void swap(int *a, int *b);
int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b) // instead of taking integers as args, it takes pointers (to integers)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Don't totally understand the process of how this works, even though I understand everything he covered in the class