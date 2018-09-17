#include <stdio.h>
#include <string.h>

int main() {
    char palavrasecreta[20];

    //sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 1;

    printf("%s", palavrasecreta);

    do {
        char chute;
        scanf("%c", &chute);

        for(int i = 0; i < strlen(palavrasecreta); i++) {
            printf("Estou vendo a letra %c na posicao %d\n", palavrasecreta[i], i);
            if(palavrasecreta[i] == chute) {
                printf("A posicao %d tem essa letra!\n", i);
            }
        }
    } while(!acertou && !enforcou);

    printf("");
}