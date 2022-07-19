#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"
#include "binary_search.h"

#define LEN 10

int main(void)
{
    int A[LEN], v, i, j, k = 0;

    printf("Enter a sequence of 10 integers: ");
    while (i < LEN)
        scanf("%d", &A[i++]);

    printf("Enter a sum integer: ");
    scanf("%d", &v);

    merge_sort(A, 0, LEN-1);
    for (i = 0; i < LEN; i++) {
        j = binary_search(A, v-A[i], LEN, 0);
        if (j != -1) {
            k++;
            printf("The number %d can be written as the sum of the two numbers "
                    "%d and %d in the array\n", v, A[i], A[j]);
        }
    }
    if (k == 0)
        printf("The number %d cannot be written as the sum of two numbers "
                "in the array\n", v);

    exit(EXIT_SUCCESS);
}
