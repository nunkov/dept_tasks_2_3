#include <stdio.h>
int main()
{
    int i, j, k;
    int brRed;

    printf("Unesite broj redaka piramide \n");
    scanf_s("%d", &brRed);

    //redci
    for (i = brRed; i > 0; i--) {

        //razmaci unutar pojedinacnog retka
        for (j = brRed - i; j < brRed; j++)
            printf(" ");

        //ispis unutar retka
        for (k = i; k <= brRed; k++) {
            printf("%d", i);

            //zarezi
            if (i != brRed && (k != brRed))
                printf(",");
        }
        //novi redak
        printf("\n");
    }
}
