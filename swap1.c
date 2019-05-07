#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x;
    scanf("%d", &x); 
    int y;
    scanf("%d", &y);

    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("Swapping.... \n");
    swap(&x, &y);
    printf("Swapped.\n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    return 0;
}

//swap the values of variables
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}   