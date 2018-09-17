#include <stdio.h>

int main() {
    char letra1 = 'M';
    char letra2 = 'E';
    char letra3 = 'L';
    char letra4 = 'A';
    char letra5 = 'N';
    char letra6 = 'C';
    char letra7 = 'I';
    char letra8 = 'A';

    printf("%c%c%c%c%c%c%c%c", letra1, letra2, letra3, letra4, letra5, letra6, letra7, letra8);

    int notas[10];

    notas[0] = 10;
    notas[2] = 9;
    notas[3] = 8;
    notas[9] = 4;

    printf("%d %d %d", notas[0], notas[2], notas[9]);
}