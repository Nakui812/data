#include <stdio.h>

int main(void)
{
    int giorno1, giorno2;
    int mese1, mese2;
    int anno1, anno2;

    printf("Inserisci la dati della prima data\n");
    printf("Inserisci il giorno\n");
    scanf("%d", &giorno1);
    printf("Inserisci il mese\n");
    scanf("%d", &mese1);
    printf("Inserisci l'anno\n");
    scanf("%d", &anno1);

    printf("Inserisci la dati della seconda data\n");
    printf("Inserisci il giorno\n");
    scanf("%d", &giorno2);
    printf("Inserisci il mese\n");
    scanf("%d", &mese2);
    printf("Inserisci l'anno\n");
    scanf("%d", &anno2);

    if (anno1 > anno2)
    {
        printf("La prima data è la data più recente");
    }
    else if (anno1 < anno2)
    {
        printf("La seconda data è la data più recente");
    }
    else if (anno1 == anno2 && mese1 > mese2)
    {
        printf("La prima data è la data più recente");
    }
    else if (anno1 == anno2 && mese1 < mese2)
    {
        printf("La seconda data è la data più recente");
    }
    else if (anno1 == anno2 && mese1 == mese2 && giorno1 > giorno2)
    {
        printf("La prima data è la data più recente");
    }
    else if (anno1 == anno2 && mese1 == mese2 && giorno1 < giorno2)
    {
        printf("La seconda data è la data più recente");
    }

    return 0;
}