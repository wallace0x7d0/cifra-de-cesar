#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

    printf("Digite um texto: ");
    char *texto = malloc(255*sizeof(char));

    fgets(texto, 255*sizeof(char), stdin);

    printf("Digite quantas casas avancar: ");
    int shift;
    scanf("%i", &shift);

    for (int i = 0; texto[i] != '\0'; ++i){
        if (texto[i] >= 97 && texto[i] <= 122){
            texto[i] = alpha[((texto[i] - 97) + shift) % 26];
        }
    }

    printf("\n\033[1;2;31mTEXTO CIFRADO: %s\033[0m\n", texto);
    
    free(texto);
    return 0;
}