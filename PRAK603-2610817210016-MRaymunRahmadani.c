#include <stdio.h>

int main() {
    int n1, n2;
    int matriks[100][100];

    scanf ("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf ("Jumlah tidak sama");
    } else {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n1; j++) {
                scanf ("%d", &matriks[i][j]);
            }
        }

        for (int j = 0; j < n1; j++) {
            printf ("%d ", matriks[0][j] * matriks[1][j]);
        }
    }
    
    return 0;
}