#include <stdio.h>
float calcularPibPerCapita(float pib, int populacao)
{
  return pib / populacao;
}
float calcularDensidadePopulacional(int populacao, float area)
{
  return 1 / (populacao / area);
}
float calcularSuperPoder(int populacao, float area, float pib, int numPontosTuristicos, float pibPerCapita, float DensidadePopulacional)
{
  return populacao + area + pib + numPontosTuristicos + calcularPibPerCapita(pib, populacao) + calcularDensidadePopulacional(populacao, area);
}

int main()
{

  // Variaveis carta 01 e carta 02

  char codigo01[10], codigo02[10];
  char estado01[5], estado02[5];
  char cidade01[30], cidade02[30];
  float area01, area02;
  float pib01, pib02;
  unsigned int populacao01, populacao02;
  int numpontosTuristicos1, numpontosTuristicos2;
  float densidadepopulacional1, densidadepopulacional2;
  float PIBpercapita1, PIBpercapita2;
  float superPoder1, superPoder2;
  // float densidadepopulacional2 = (População2 / area2);
  // float pibpercapita2 = ( pib2 / População2 );

  // INTRODUÇÃO

  //  Cadastro das Cartas:
  // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
  // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

  printf("Bem-vindo ao Super Trunfo - Países ! 🎮\n");

  printf("======================================================================\n\n");
  printf("Neste jogo, você escolherá um país e competirá contra o computador.\n");
  printf("Cada país possui atributos como população, área territorial, código da carta, PIB e mais.\n");
  printf("Você deve escolher o atributo que acredita ser mais forte para vencer!\n\n");
  printf("Vamos começar? Prepare-se para uma batalha de conhecimentos geográficos! 🗺️\n\n");

  // Coleta de dados da carta número 1

  printf("==========📍CARTA 01📍=========================================\n\n");

  printf("Insira o estado escolhido (Letra de A a H): \n");
  printf("OBS.: deve ser inserido uma única letra, exemplo: A, B, C, D...\n");

  printf("\nEstado escolhido: ");
  scanf("%s", estado01);

  printf("Digite o código do estado escolhido (ex A01, B02...): \n");
  scanf("%s", codigo01);

  printf("Digite o nome da cidade escolhida: \n");
  scanf("%s", cidade01);

  printf("Digite a população da cidade escolhida: \n");
  scanf("%d", &populacao01);

  printf("Área (em km²) da cidade escolhida: \n");
  scanf("%f", &area01);

  printf("Digite o produto interno bruto (PIB): \n");
  scanf("%f", &pib01);

  printf("Digite o números de pontos turisticos da cidade escolhida: \n");
  scanf("%d", &numpontosTuristicos1);

  printf("A primeira carta foi cadastrada com sucesso ✅\n\n");

  // Coleta de dados da carta número 2

  printf("==========📍CARTA 02📍============================================\n\n");

  printf("Insira o estado escolhido (Letra de A a H): \n");
  printf("OBS.: deve ser inserido uma única letra, exemplo: A, B, C, D...\n");

  printf("\nEstado escolhido: ");
  scanf("%s", estado02);

  printf("Digite o código do estado escolhido (ex A01, B02...): \n");
  scanf("%s", &codigo02);

  printf("Digite o nome da cidade escolhida: \n");
  scanf("%s", &cidade02);

  printf("Digite a população da cidade escolhida: \n");
  scanf("%d", &populacao02);

  printf("Área (em km²) da cidade escolhida: \n");
  scanf("%f", &area02);

  printf("Digite o produto interno bruto (PIB): \n");
  scanf("%f", &pib02);

  printf("Digite o números de pontos turisticos da cidade escolhida: \n");
  scanf("%d", &numpontosTuristicos2);

  printf("A segunda carta foi cadastrada com sucesso ✅\n");

  printf("🥳 As cartas foram cadastradas, Vamos ver? 🥳\n\n");

  // Cálculo da densidade populacional das carta 1 e 2

  densidadepopulacional1 = (float)(populacao01 / area01);

  densidadepopulacional2 = (float)(populacao02 / area02);

  // Cálculo do PIB per capita das carta 1 e 2

  PIBpercapita1 = (float)(pib01 / populacao01);

  PIBpercapita2 = (float)(pib02 / populacao02);

  // Cálculando Super Poder

  superPoder1 = (float)populacao01 + area01 + pib01 + numpontosTuristicos1 + PIBpercapita1 + (1.0 / densidadepopulacional1);
  superPoder2 = (float)populacao02 + area02 + pib02 + numpontosTuristicos2 + PIBpercapita2 + (1.0 / densidadepopulacional2);

  // Exibindo dados da carta 1

  printf("=============🗂️ TODOS OS DADOS DA PRIMEIRA CARTA 🗂️=====================================\n\n");

  printf("Estado: %s \n", estado01); // Exibindo as cartas
  printf("Código: %s \n", codigo01);
  printf("Cidade: %s \n", cidade01);
  printf("População: %lu hab \n", populacao01);
  printf("Área territorial: %.2f km² \n", area01);
  printf("PIB: %f bilhões de reais\n", pib01);
  printf("Quantidade de pontos turisticos: %d \n", numpontosTuristicos1);
  printf("A densidade populacional é: %.2f hab/km² \n", densidadepopulacional1);
  printf("0 PIB per capita é: %.5f reais \n", PIBpercapita1);
  printf("O Super Poder: %f\n", superPoder1);

  // Exibindo dados da carta 2

  printf("=============🗂️ TODOS OS DADOS DA SEGUNDA CARTA 🗂️======================================\n\n");

  printf("Estado: %s \n", estado02); // Exibindo as cartas
  printf("Código: %s \n", codigo02);
  printf("Cidade: %s \n", cidade02);
  printf("População: %lu hab \n", populacao02);
  printf("Área territorial: %.2f km² \n", area02);
  printf("PIB: %f bilhões de reais\n", pib02);
  printf("Quantidade de pontos turiisticos: %d \n", numpontosTuristicos2);
  printf("A densidade populacional é: %.2f hab/km² \n", densidadepopulacional2);
  printf("O PIB per capita é: %.5f reais\n", PIBpercapita2);
  printf("O Super Poder: %f\n", superPoder2);

  printf("\n===============================================================================================\n");

  printf("Cartas cadastradas com sucesso ✅\n");

  printf("==================================================================================================\n\n");

  printf("Vamos descobrir os vencedores ? 🎮🥳🥳👇\n\n");

  // Resultados

  int vencedorPopulacao = populacao01 > populacao02;
  int vencedorArea = area01 > area02;
  int vencedorPIB = pib01 > pib02;
  int vencedorPontosTuristicos = numpontosTuristicos1 > numpontosTuristicos2;
  int vencedorDensidadePopulacional = calcularDensidadePopulacional(populacao01, area01) > calcularDensidadePopulacional(populacao02, area02);
  int vencedorPibPerCapita = calcularPibPerCapita(pib01, populacao01) > calcularPibPerCapita(pib02, populacao02);
  int vencedorSuperPoder = calcularSuperPoder(populacao01, area01, pib01, numpontosTuristicos1, calcularPibPerCapita(pib01, populacao01), calcularDensidadePopulacional(populacao01, area01)) > calcularSuperPoder(populacao02, area02, pib02, numpontosTuristicos2, calcularPibPerCapita(pib02, populacao02), calcularDensidadePopulacional(populacao02, area02));

  // Comparação das cartas

  printf("===========🪄  COMPARAÇÃO DAS CARTAS 🪄=================================================\n\n");

  printf("População da Carta venceu? (%d) \n", vencedorPopulacao);
  printf("Área da Carta venceu? (%d) \n", vencedorArea);
  printf("PIB da Carta venceu? (%d) \n", vencedorPIB);
  printf("Pontos turísticos da Carta venceu? (%d) \n", vencedorPontosTuristicos);
  printf("Densidade populacional da Carta venceu? (%d) \n", vencedorDensidadePopulacional);
  printf("Pib Per Capita da Carta  venceu? (%d) \n", vencedorPibPerCapita);
  printf("Super poder da Carta venceu? (%d) \n", vencedorSuperPoder);

  return 0;
}