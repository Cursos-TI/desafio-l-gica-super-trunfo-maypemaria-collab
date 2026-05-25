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
    int opcao1, opcao2;
    float valor1_carta1= 0, valor1_carta2= 0;
    float valor2_carta1= 0, valor2_carta2= 0;

    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite a opcao do primeiro atributo: ");
    scanf(" %d", &opcao1);
    //Guardar os valores do primeiro atributo escolhido para cada carta//   
    switch (opcao1)
    {
    case 1:
        valor1_carta1 = (float)populacao1;
        valor1_carta2 = (float)populacao2;
        break;
    case 2:
        valor1_carta1 = area1;
        valor1_carta2 = area2;
        break;
    case 3:
        valor1_carta1 = pib1;
        valor1_carta2 = pib2;
        break;
    case 4:
        valor1_carta1 = (float)pontosturisticos1;
        valor1_carta2 = (float)pontosturisticos2;
        break;
    case 5:
        valor1_carta1 = densidade1;
        valor1_carta2 = densidade2;
        break;
    case 6:
        valor1_carta1 = pibpercapita1;
        valor1_carta2 = pibpercapita2;
        break;
    
    default: printf("Opcao invalida. Tente novamente.\n");
        break;
    }
//Escolher o segundo atributo para comparar//
    printf("Escolha o segundo atributo para comparar:\n");
    if (opcao1 != 1) printf("1. Populacao\n");
    if (opcao1 != 2) printf("2. Area\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turisticos\n");
    if (opcao1 != 5) printf("5. Densidade Populacional\n");
    if (opcao1 != 6) printf("6. PIB per capita\n");
    printf("Digite a opcao do segundo atributo: ");
    scanf(" %d", &opcao2);
    //Guardar os valores do segundo atributo escolhido para cada carta//
    switch (opcao2)
    {    case 1:
        valor2_carta1 = (float)populacao1;
        valor2_carta2 = (float)populacao2;
        break;
    case 2:
        valor2_carta1 = area1;
        valor2_carta2 = area2;
        break;
    case 3:
        valor2_carta1 = pib1;       
        valor2_carta2 = pib2;
        break;
    case 4:
        valor2_carta1 = (float)pontosturisticos1;
        valor2_carta2 = (float)pontosturisticos2;
        break;
    case 5:
        valor2_carta1 = densidade1;
        valor2_carta2 = densidade2;
        break;
    case 6:
        valor2_carta1 = pibpercapita1;
        valor2_carta2 = pibpercapita2;
        default: printf("Opcao invalida. Tente novamente.\n");
        break;  
    }
    //Bloco para acumular os pontos de cada carta com base nos atributos escolhidos//
    int pontos_carta1 = 0, pontos_carta2 = 0;

    if (opcao1 ==5)
    {
        pontos_carta1 += (valor1_carta1 < valor1_carta2) ? 1 : 0;
        pontos_carta2 += (valor1_carta2 < valor1_carta1) ? 1 : 0;
    } else {
        pontos_carta1 += (valor1_carta1 > valor1_carta2) ? 1 : 0;
        pontos_carta2 += (valor1_carta2 > valor1_carta1) ? 1 : 0;
    }
    //Agora o if para o segundo atributo//
    if (opcao2 ==5)
    {
        pontos_carta1 += (valor2_carta1 < valor2_carta2) ? 1 : 0;
        pontos_carta2 += (valor2_carta2 < valor2_carta1) ? 1 : 0;
    } else {
        pontos_carta1 += (valor2_carta1 > valor2_carta2) ? 1 : 0;
        pontos_carta2 += (valor2_carta2 > valor2_carta1) ? 1 : 0;
    }
    //Calculando a soma dos valores totais//
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;
    //Exibindo o resultado da comparação//
    printf("\n---Resultado da comparacao---\n");
    printf("Cartas na disputa: %s VS %s\n", nome1, nome2);
    printf("Pontos da primeira carta %s: %d\n", nome1, pontos_carta1);
    printf("Pontos da segunda carta %s: %d\n", nome2, pontos_carta2);
    printf("Soma dos valores da primeira carta %s: %.2f\n", nome1, soma_carta1);
    printf("Soma dos valores da segunda carta %s: %.2f\n", nome2, soma_carta2);

    //Uso do operador ternário para determinar o vencedor//
    (pontos_carta1 > pontos_carta2) ? printf("Vencedor: %s\n", nome1) :
    (pontos_carta2 > pontos_carta1) ? printf("Vencedor: %s\n", nome2) : printf("Empate nos pontos!\n");

    return 0;
}