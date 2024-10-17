#include <stdio.h>

int main(void) {
    int num, somma = 0, n, i;
    printf("quanti numeri: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("numero %d :", i);
        scanf("%d", &num);
        if (num > 0) {
            somma += num;
        }else if (num < 0) {
            somma += num*(-1);
        }
    }
    printf("somma = %d", somma);
}
