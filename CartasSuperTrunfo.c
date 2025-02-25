#include <stdio.h>

int main() {
    char Estado[50];
    char Codigocarta[50];
    char Cidade[50];
    int Populacao;
    float Areakm;
    float Pib;
    int PontosTuristicos;

    printf("Estado\n");
    scanf("%s",&Estado);

    printf("Código da carta\n");
    scanf("%s", &Codigocarta);

    printf("Cidade\n");
    scanf("%s", &Cidade);

    printf("Populaçao\n");
    scanf("%d", &Populacao);

    printf("Area km²\n");
    scanf("%f", &Areakm);

    printf("Pib\n");
    scanf("%f", &Pib);

    printf("Pontos Turisticos\n");
    scanf("%d", &PontosTuristicos);
    
    printf("Estado: %s\n", Estado);
    printf("Codigo da carta: %s\n", Codigocarta);
    printf("Cidade: %s\n", Cidade);
    printf("Populaçao: %d\n", Populacao);
    printf("Areakm: %f\n", Areakm);
    printf("Pib: %f\n", Pib);
    printf("PontosTuristicos: %d\n", PontosTuristicos);

    return 0;


}


