#include <stdio.h>

int main() {
    int nota1, nota2, nota3, media, bonus;


    printf("Digite suas 3 notas: \n");
    printf("Primeira nota: ");
    scanf("%d", &nota1);
    printf("Segunda nota: ");
    scanf("%d", &nota2);
    printf("Terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    bonus = ( 1 );

    printf("media: %d\n", media);

    if (media < 7) {
        printf("reprovado\n");
        
    } else if (media == 8)
    {
        printf("espetacular!\n");
        media = media + bonus;
        printf("nova media: %d\n", media);
    } 
    else if (media == 9) {
        media = media + bonus;
        printf("fodao!\n");
        printf("nova media: %d\n", media);
        
    }
    else {
        printf("aprovado");
    }


    
    return 0;
    
}