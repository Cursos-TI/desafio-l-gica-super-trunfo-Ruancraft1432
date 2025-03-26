#include <stdio.h>

int main() {

    //cartas 1 e 2
    char estado[20], codigo[10], nome[20], estado2[20], codigo2[10], nome2[20];
    int pontos_turisticos, pontos_turisticos2;
    float area, PIB, densidade_populacional, capita, area2, PIB2, densidade_populacional2, capita2;
    unsigned long int populacao,  populacao2;

    //registo da carta 1
    printf("Registro de carta número 1\n");

    printf("Digite o nome do estado\n");
    scanf("%s" , &estado);

    printf("Digite o código da carta, primeira letra do estado e depois número(EX:A03,B05)\n");
    scanf("%s", &codigo);

    printf("Digite o nome da capital\n");
    scanf("%s", &nome);

    printf("Digite a quantidade da população do estado\n");
    scanf("%u", &populacao);

    printf("Digite a área do estado em km²\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos_turisticos);

    printf("\n");
    //registo da carta 2
    printf("Registro de carta número 2\n");

    printf("Digite o nome do estado\n");
    scanf("%s" , &estado2);

    printf("Digite o código da carta, primeira letra do estado e depois número(EX:A03,B05)\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da capital\n");
    scanf("%s", &nome2);

    printf("Digite a quantidade da população do estado\n");
    scanf("%u", &populacao2);

    printf("Digite a área do estado em km²\n");
    scanf("%f", &area2);

    printf("Digite o PIB\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos_turisticos2);

    //área de calculo 1
    densidade_populacional = (float)populacao / area;
    capita = PIB / (float)populacao * 1000000000;
    //área de calculo 2
    densidade_populacional2 = (float)populacao2 / area2;
    capita2 = PIB2 / (float)populacao2 * 1000000000;

    printf("\n");
    //resultado das cartas
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", capita);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    printf("\n");
    //Menu
    int MENU, MENU2, carta, carta2, carta3, carta4, resultado, resultado2;
    printf("Ecolha Uma Atributo\n");
    printf("Digite 1 Para População\n");
    printf("Digite 2 Para Área\n");
    printf("Digite 3 Para PIB\n");
    printf("Digite 4 para Pontos Turisticos\n");
    printf("Digite 5 para Densidade Populacional\n");
    printf("Digite 6 Para PIB per Capita\n");
    scanf("%d", &MENU);
    //Comparação
    switch (MENU)
    {
    case 1:
        carta = populacao;
        carta2 = populacao2;
        break;
    case 2:
        carta = area;
        carta2 = area2;
        break;
    case 3:
        carta = PIB;
        carta = PIB2;
        break;
    case 4:
        carta = pontos_turisticos;
        carta2 = pontos_turisticos2;
        break;
    case 5:
        carta = densidade_populacional;
        carta2 = densidade_populacional2;
        break;
    case 6:
        carta = capita;
        carta2 = capita2;
        break;
    default:
        printf("Opção invalida\n");
        break;
    } 
    //MENU2
    printf("Escolha Outro Atributo\n");
    printf("Digite 1 Para População\n");
    printf("Digite 2 Para Área\n");
    printf("Digite 3 Para PIB\n");
    printf("Digite 4 para Pontos Turisticos\n");
    printf("Digite 5 para Densidade Populacional\n");
    printf("Digite 6 Para PIB per Capita\n");
    scanf("%d", &MENU2);

    if (MENU == MENU2) {
        printf("Não pode escolher o mesmo Atributo\n");
    } else {
    //Comparação
        switch (MENU2)
        {
        case 1:
            carta3 = populacao;
            carta4 = populacao;
            break;
        case 2:
            carta3 = area;
            carta4 = area2;
            break;
        case 3:
            carta3 = PIB;
            carta4 = PIB2;
            break;
        case 4:
            carta3 = pontos_turisticos;
            carta4 = pontos_turisticos2;
            break;
        case 5:
            carta3 = densidade_populacional;
            carta4 = densidade_populacional2;
            break;
        case 6:
            carta3 = capita;
            carta4 = capita2;
            break;
        default:
            printf("Opção invalida\n");
            break;
        } 
    }
    resultado = carta + carta3;
    resultado2 = carta2 + carta4;
    if (resultado == resultado2) {
        printf("Empate\n");
    } else if (resultado > resultado2){
        printf("Carta 1 venceu: %s\n", estado);
        printf("Números usados: %d + %d\n", carta, carta3);
        printf("Resultado: %d\n", resultado);
    } else {
        (resultado < resultado2);
        printf("Carta 2 venceu: %s\n", estado2);
        printf("Números usados: %d + %d\n", carta2, carta4);
        printf("Resultado: %d\n", resultado2);
    }

    return 0;
}