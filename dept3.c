#include <stdio.h>

int main()
{
    int i, j, k;
    int sirina;
    int brRed;
 
    printf("Unesite sirinu Vase piramide\nSirina mora biti neparan broj znamenaka.\n");
    scanf_s("%d", &sirina);

    if (sirina % 2 == 0) {
        printf("Krivi unos.\n");
    }

    else {
        brRed = sirina / 2;
        brRed++;

        //petlja za retke
        for (i = 0; i < brRed; i++) {
            //petlja za razmake u retku
            for (j = i; j < brRed - 1; j++) 
                printf("   ");
            
            //petlja za uzlazni dio niza u retku
            for (k = sirina - 2 * i; k <= sirina - i; k++) {
                printf("%d", k);
                if (i != 0)
                    printf(", ");
            }

            //petlja nakon maximuma za silazni dio niza u retku
            for (k = sirina - i - 1; k >= sirina - 2 * i; k--) {
                printf("%d", k);
                if (k != (sirina - 2*i))
                    printf(", ");
                else
                    printf(" ");
            }

            printf("\n");
        }   
    }
}

