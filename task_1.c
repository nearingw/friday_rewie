#include <stdio.h>
#include <stdlib.h>

int main () {
    int N;
    scanf ("%d", &N);
    int A [N][N];
    int B [N][N];
    int C [N][N];
    
    for (int i = 0; i<N; i++) {
        for (int j = 0; j<N; j++) {
            scanf ("%d", &A[i][j]);
        }
    }

    for (int i = 0; i<N; i++) {
        for (int j = 0; j<N; j++) {
            scanf ("%d", &B[i][j]);
        }
    }

    for (int i = 0; i<N; i++) {
        for (int j = 0; j<N; j++) {
            C[i][j] = 0;
            for (int c = 0; c<N; c++) {
                C[i][j] += A[i][c] * B[c][j];
            }
        }
    }


    for (int i = 0; i<N; i++) {
        for (int j = 0; j<N; j++) {
            if (j == N-1) printf ("%d", C[i][j]);
            else printf ("%d ", C[i][j]);
        }
        if (i!=N-1) printf ("\n");
    }
    return 0;
}


