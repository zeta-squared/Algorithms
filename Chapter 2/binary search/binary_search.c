#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int binary_search(int A[], int v, int l, int s);

int main(void)
{
    int A[LEN], v, i;

#ifndef DEBUG
    printf("Enter sequence of 10 integers: ");
    while (i < LEN)
        scanf("%d", &A[i++]);

    printf("Enter target value: ");
    scanf("%d", &v);

    i = binary_search(A, v, LEN, 0);
    if (i == -1)
        printf("%d is not in the searched array.\n", v);
    else
        printf("%d is located at index %d in the searched array.\n", v, i);
#endif

#ifdef DEBUG
    int j;

    while (i < LEN)
        A[i++] = i;

    for (i = 1; i <= 10; i++) {
        printf("Binary searching for %d:\n", i);
        j = binary_search(A, i, LEN, 0);
        if (j == -1)
            printf("\t%d is not in the array.\n", i);
        else
            printf("\t%d is at index %d in the array.\n", i, j);
    }
#endif

    exit(EXIT_SUCCESS);
}

int binary_search(int A[], int v, int l, int s)
{
    int m = l/2;

#ifdef DEBUG
    printf("\tl = %d, s = %d, m = %d, m+s = %d\n", l, s, m , m+s);
#endif

    if (A[m+s] == v) {
        return m+s;
    } else if (m == 0) {
        return -1;
    } else if (A[m+s] < v) {
        return binary_search(A, v, l-m, m+s);
    } else {
        return binary_search(A, v, l-m, s);
    }
}
