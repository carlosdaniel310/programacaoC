#include <stdio.h>

int main()
{

    // Dados carta 1
    char estado[20] = "A", codigoEstado[5] = "A01", nomeCidade[50] = "Cuité";
    unsigned long int populacao = 10000;
    float areaEmKmQuadrado = 1000;
    float pib = 1000000;
    int numPontosTuristicos = 5;

    // Dados carta 2
    char estado2[20] = "B", codigoEstado2[5] = "B02", nomeCidade2[50] = "SãoPaulo";
    unsigned long int populacao2 = 30000;
    float areaEmKmQuadrado2 = 2000;
    float pib2 = 2000000;
    int numPontosTuristicos2 = 10;

    int opcao = 0;

    printf("Menu principal:\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        int escolhaAtributos = 0;
        printf("Quantos atributos deseja ver?\n");
        printf("1. 1 atributo\n");
        printf("2. 2 atributos\n");
        scanf("%d", &escolhaAtributos);

        switch (escolhaAtributos)
        {

        case 1:
            int opcaoMenuJogar = 0;
            printf("Qual atributo deseja comparar?\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("Escolha a opção desejada: ");
            scanf("%d", &opcaoMenuJogar);
            printf("=====================================================\n");

            switch (opcaoMenuJogar)
            {
            case 1:
                printf("=====================================================\n");
                printf("Comparando População:\n");
                printf("-----------------------------------------------------\n");
                printf("%s: %lu habitantes\n", nomeCidade, populacao);
                printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
                printf("-----------------------------------------------------\n");
                populacao > populacao2 ? printf("Resultado: %s tem a maior população\n", nomeCidade) : printf("Resultado: %s tem a maior população\n", nomeCidade2);
                printf("=====================================================\n");
                break;
            case 2:
                printf("=====================================================\n");
                printf("Comparando Área:\n");
                printf("-----------------------------------------------------\n");
                printf("%s: %.2f km²\n", nomeCidade, areaEmKmQuadrado);
                printf("%s: %.2f km²\n", nomeCidade2, areaEmKmQuadrado2);
                printf("-----------------------------------------------------\n");
                areaEmKmQuadrado > areaEmKmQuadrado2 ? printf("Resultado: %s tem a maior área\n", nomeCidade) : printf("Resultado: %s tem a maior área\n", nomeCidade2);
                printf("=====================================================\n");
                break;
            case 3:
                printf("=====================================================\n");
                printf("Comparando PIB:\n");
                printf("-----------------------------------------------------\n");
                printf("%s: %.2f bilhões\n", nomeCidade, pib);
                printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
                printf("-----------------------------------------------------\n");
                pib > pib2 ? printf("Resultado: %s tem o maior PIB\n", nomeCidade) : printf("Resultado: %s tem o maior PIB\n", nomeCidade2);
                printf("=====================================================\n");
                break;
            default:
                printf("=====================================================\n");
                printf("Opção inválida!\n");
                printf("=====================================================\n");
                break;
            }
            break;

        case 2:
            int atributo1 = 0;
            printf("Selecione o primeiro atributo:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("Escolha a opção desejada: ");
            scanf("%d", &atributo1);
            printf("=====================================================\n");

            int atributo2 = 0;
            printf("Selecione o segundo atributo:\n");
            atributo1 != 1 ? printf("1. População\n") : printf("Atributo população já selecionado\n");
            atributo1 != 2 ? printf("2. Área\n") : printf("Atributo área já selecionado\n");
            atributo1 != 3 ? printf("3. PIB\n") : printf("Atributo PIB já selecionado\n");
            printf("Escolha a opção desejada: ");
            scanf("%d", &atributo2);
            printf("=====================================================\n");

            int pontosCarta1 = 0, pontosCarta2 = 0;
            float somaCarta1 = 0, somaCarta2 = 0;

            if (atributo1 == 1 && atributo2 == 2 || atributo2 == 1 && atributo1 == 2)
            {
                somaCarta1 = populacao + areaEmKmQuadrado;
                somaCarta2 = populacao2 + areaEmKmQuadrado2;
                printf("=====================================================\n");
                printf("Comparando População + Área:\n");
                printf("-----------------------------------------------------\n");
                printf("%s: %lu habitantes + %.2f km² = %d\n", nomeCidade, populacao, areaEmKmQuadrado, somaCarta1);
                printf("%s: %lu habitantes + %.2f km² = %d\n", nomeCidade2, populacao2, areaEmKmQuadrado2, somaCarta2);
                printf("-----------------------------------------------------\n");
                somaCarta1 > somaCarta2 ? printf("Resultado: %s tem a maior soma\n", nomeCidade) : printf("Resultado: %s tem a maior soma\n", nomeCidade2);
                printf("=====================================================\n");
                somaCarta1 > somaCarta2 ? pontosCarta1++ : pontosCarta2++;
            }
            
            if (atributo1 == 2 && atributo2 == 3 || atributo2 == 2 && atributo1 == 3)
            {
                somaCarta1 = areaEmKmQuadrado + pib;
                somaCarta2 = areaEmKmQuadrado2 + pib2;
                printf("=====================================================\n");
                printf("Comparando Área + PIB:\n");
                printf("-----------------------------------------------------\n");
                printf("%s: %.2f km² + %.2f bilhões = %.2f\n", nomeCidade, areaEmKmQuadrado, pib, somaCarta1);
                printf("%s: %.2f km² + %.2f bilhões = %.2f\n", nomeCidade2, areaEmKmQuadrado2, pib2, somaCarta2);
                printf("-----------------------------------------------------\n");
                somaCarta1 > somaCarta2 ? printf("Resultado: %s tem a maior soma\n", nomeCidade) : printf("Resultado: %s tem a maior soma\n", nomeCidade2);
                printf("=====================================================\n");
                somaCarta1 > somaCarta2 ? pontosCarta1++ : pontosCarta2++;
            }
            
            if (atributo1 == 3 && atributo2 == 1 || atributo2 == 3 && atributo1 == 1)
            {
                somaCarta1 = pib + populacao;
                somaCarta2 = pib2 + populacao2;
                printf("=====================================================\n");
                printf("Comparando PIB + População:\n");
                printf("-----------------------------------------------------\n");
                printf("%s: %.2f bilhões + %lu habitantes = %.2f\n", nomeCidade, pib, populacao, somaCarta1);
                printf("%s: %.2f bilhões + %lu habitantes = %.2f\n", nomeCidade2, pib2, populacao2, somaCarta2);
                printf("-----------------------------------------------------\n");
                somaCarta1 > somaCarta2 ? printf("Resultado: %s tem a maior soma\n", nomeCidade) : printf("Resultado: %s tem a maior soma\n", nomeCidade2);
                printf("=====================================================\n");
                somaCarta1 > somaCarta2 ? pontosCarta1++ : pontosCarta2++;
            }
            

            if (pontosCarta1 > pontosCarta2)
            {
                printf("=====================================================\n");
                printf("Resultado final:\n");
                printf("-----------------------------------------------------\n");
                printf("Vencedor: %s, porque sua soma (%.2f) e maior que a soma da cidade %s (%.2f) \n", nomeCidade, somaCarta1, nomeCidade2, somaCarta2);
                printf("Pontos: %d \n", pontosCarta1);
                printf("-----------------------------------------------------\n");
            }
            else if (pontosCarta1 < pontosCarta2)
            {
                printf("=====================================================\n");
                printf("Resultado final:\n");
                printf("-----------------------------------------------------\n");
                printf("Vencedor: %s, porque sua soma (%.2f) e maior que a soma da cidade %s (%.2f) \n", nomeCidade2, somaCarta2, nomeCidade, somaCarta1);
                printf("Pontos: %d \n", pontosCarta2);
                printf("-----------------------------------------------------\n");
            }
            else
            {
                printf("=====================================================\n");
                printf("Resultado final:\n");
                printf("-----------------------------------------------------\n");
                printf("Empate!\n");
                printf("Empate, pois a soma das cidades %s (%.2f) e %s (%.2f) são iguais\n", nomeCidade, somaCarta1, nomeCidade2, somaCarta2);
                printf("Pontos: %d\n", pontosCarta1);
                printf("Pontos: %d\n", pontosCarta2);
                printf("-----------------------------------------------------\n");
            }
        }
        break;
    case 2:
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
}