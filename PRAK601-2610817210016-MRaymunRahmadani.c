#include <stdio.h>

int main() {
    int matriks [100][100];
    int baris, kolom;

    scanf("%d %d", &baris, &kolom);

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf ("%d", &matriks[i][j]);
        }
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf ("%d ", matriks[i][j]);
        }
    printf ("\n");
    }

    return 0;
}