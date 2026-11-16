#include <stdio.h>

int main() {
    int n;
    int zetsu[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < n; i++) {
        zetsu[i] = zetsu[i] * (i + 1);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", zetsu[i]);
    }
    
    return 0;
}