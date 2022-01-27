/* p.59 */

#include<stdio.h>

/* 配列の要素を順番に出力 */
void trace(int A[], int N) {
    int i;
    for ( i = 0; i < N; i++ ) {
        if ( i > 0) printf(" "); /* 隣接する要素の間に1つ空白を出力 */
        printf("%d", A[i]);
    }
    printf("\n");
}

/* 挿入ソート(0オリジン配列 */
void insertionSort(int A[], int N) {
    int j, i, v;
    for ( i = 1; i < n; i++ ) {
        v = A[i];
        j = i - 1;
        while ( j >= 0 && A[j] > v ) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        trace(A, N);
    }
}

/* int main() から続き */
