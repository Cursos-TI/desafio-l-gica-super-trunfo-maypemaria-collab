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

    printf("\n---Menu Comparacao das cartas---\n");
    int opcao;
    printf("Escolha a opcao de comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite a opcao: ");
    scanf(" %d", &opcao);   

    switch (opcao) {
         case 1: //Se o usuario digitou 1//
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao1 < populacao2) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            } break;
        case 2: //Se o usuario digitou 2//
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area1 < area2) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            } break;
        case 3: //Se o usuario digitou 3//
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib1 < pib2) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");    
            }   break;  
        case 4: //Se o usuario digitou 4//
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontosturisticos1 < pontosturisticos2) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");    
            }   break;
        case 5: //Se o usuario digitou 5//  
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nome1);
            } else if (densidade1 > densidade2) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");    
            }   break;    
        case 6: //Se o usuario digitou 6//
                if (pibpercapita1 > pibpercapita2) {
                    printf("Vencedor: %s\n", nome1);
                } else if (pibpercapita1 < pibpercapita2) {
                    printf("Vencedor: %s\n", nome2);
                } else {
                    printf("Empate!\n");    
            }   break;
        default:
        printf("Opcao invalida!\n"); 
              break;
        }
    return 0;
}