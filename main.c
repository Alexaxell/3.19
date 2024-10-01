#include <stdio.h>

int main(void) {
    int lato1, lato2, lato3;
    printf("inserisci la misura del primo lato:");
    scanf("%d", &lato1);
    printf("inserisci la misura del secondo lato:");
    scanf("%d", &lato2);
    printf("inserisci la misura del terzo lato:");
    scanf("%d", &lato3);
    if (lato1 == lato2 && lato1 == lato3) {
        printf("il triangolo è equilatero");
    }
    else if (lato1 == lato3) {
        printf("il triangoplo è isocele");
    }
    else if (lato2 == lato3) {
        printf("il triangolo è isoscele");
    }
    else {
        printf("il triangolo è scaleno");
    }

    return 0;
}
