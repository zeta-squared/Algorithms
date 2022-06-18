#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 10

void i_sort(int *);

int main(void)
{
    int ch, i = 0, a[MAX_LEN] = {0};

    printf("Enter a sequence of 10 integers: ");
    while (i < MAX_LEN)
        scanf("%d", &a[i++]);

    i_sort(a);
    for (i = 0; i < MAX_LEN; i++)
        printf("%d ", a[i]);
    putchar('\n');

    return 0;
}

void i_sort(int *a)
{
    int i, j, key;

    for (i = 1; i < MAX_LEN; i++) {
        key = a[i];
        j = i - 1;
        while (j > 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
