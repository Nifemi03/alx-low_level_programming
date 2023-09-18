#include <stdio.h>

void updateValueTo98(int *ptr);

int main(void)
{
    int number = 0;
    int *ptr = &number;

    printf("Before update: %d\n", *ptr);

    updateValueTo98(ptr);

    printf("After update: %d\n", *ptr);

    return 0;
}
