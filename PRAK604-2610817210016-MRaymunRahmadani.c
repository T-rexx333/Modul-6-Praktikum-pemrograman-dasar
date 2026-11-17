#include <stdio.h>
#include <string.h>

int main() {
    char kode[1000], pesan[1000];
    int bintang = 0, pagar = 0;

    scanf (" %[^\n]", kode);
    scanf (" %[^\n]", pesan);

    if (strlen(kode) != strlen(pesan)) {
        printf ("Panjang kalimat berbeda, pesan palsu");
        return 0;
    }

    for (int i = 0; i < strlen(kode); i++) {
        if (kode[i] == ' ' && pesan[i] == ' ') {
            printf (" ");
        } else if (kode[i] == pesan[i]) {
            printf("*");
            bintang++;
        } else {
            printf("#");
            pagar++; 
        }
    }
    printf("\n");

    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang > pagar) {
        printf("Pesan Asli");
    }else {
        printf("Pesan Palsu");
    }

    return 0;
}