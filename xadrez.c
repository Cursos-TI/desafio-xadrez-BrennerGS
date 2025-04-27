#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    int b = 1;
    int t = 1;
    int r = 1;

    printf("\n Movendo Bispo \n");

    while (b <= 5){

        printf("Cima direita  ");

        b++;
    }

    printf("\n Movendo Torre \n");

    while (t <= 5){

        printf("Frente  ");

        t++;
    }

    printf("\n Movendo Rainha \n");

    while (r <= 8){

        printf("Esquerda  ");

        r++;
    }

    return 0;
    return 0;
}
