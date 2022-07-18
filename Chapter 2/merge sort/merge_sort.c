#include <stdio.h>
#include <stdlib.h>

void merge_sort(int A[], int p, int r);
void merge(int A[], int p, int q, int r);

int main(void)
{
    int A[10], i, p, r;

    fprintf(stdout, "Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter index to start sort: ");
    scanf("%d", &p);

    printf("Enter index to end sort: ");
    scanf("%d", &r);

    merge_sort(A, p, r);
    printf("The numbers in sorted order are:");
    for (i = p; i < r + 1; i++)
        printf(" %d", A[i]);
    printf("\n");
    for (i = 0; i < 10; i++)
        printf("%d ", A[i]);
    printf("\n");

    exit(EXIT_SUCCESS);
}

void merge_sort(int A[], int p, int r)
{
    int q;

    if (p < r) {
        q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A, p, q, r);
    }
}

void merge(int A[], int p, int q, int r)
{
    int n, m, i, j, k;

    n = q - p;
    m = r - q - 1;

    int L[n+1], R[m+1];

    for (i = 0; i < n + 1; i++)
        L[i] = A[p+i];

    for (j = 0; j < m + 1; j++)
        R[j] = A[q+j+1];

    for (i = 0, j = 0, k = p; k < r + 1; k++) {
        if (i > n)
            A[k] = R[j++];
        else if (j > m)
            A[k] = L[i++];
        else if (L[i] <= R[j])
            A[k] = L[i++];
        else
            A[k] = R[j++];
    }
}
