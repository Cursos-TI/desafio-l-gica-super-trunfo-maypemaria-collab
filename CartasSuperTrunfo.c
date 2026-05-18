#include <locale.h>
#include <stdio.h>  

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n---Dados da carta 1---\n");
    char estado1 [50];
    char codigo1 [4];
    char nome1 [50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    printf("\n---Carta 1---\n");
    printf("Digite o estado: ");
    scanf(" %s", estado1);
    printf("Digite o codigo: ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao1);
    printf("Digite a area km2: ");
    scanf(" %f",&area1);
    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f",&pib1);
    printf("Digite os pontos turisticos: ");
    scanf(" %d",&pontosturisticos1);
    // Calculo da densidade populacional e PIB per capita 1 //
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 *1000000000 / (float)populacao1;
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita1: %.2f reais\n", pibpercapita1);

    printf("\n---Dados da carta 2---\n");
    char estado2 [50];
    char codigo2 [4];
    char nome2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    printf("\n---Carta 2---\n");
    printf("Digite o estado: ");
    scanf(" %s", estado2);
    printf("Digite o codigo: ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);
    printf("Digite a area km2: ");
    scanf(" %f", &area2);
    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f",&pib2);
    printf("Digite os pontos turisticos: ");
    scanf(" %d",&pontosturisticos2);
    // Calculo da densidade populacional e PIB per capita 2 //
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 *1000000000 / (float)populacao2;
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita2: %.2f reais\n", pibpercapita2 );

    printf("\n---Comparacao das cartas---\n");
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu\n", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu\n", nome2);
    } 
    return 0;
}