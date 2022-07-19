#include "binary_search.h"

int binary_search(int A[], int v, int l, int s)
{
    int m = l/2;

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
