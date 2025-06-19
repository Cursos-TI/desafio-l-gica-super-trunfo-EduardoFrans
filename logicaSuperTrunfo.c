#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações de uma cidade
struct Cidade {
    char codigo[10];
    char nome[50];
    char estado[3];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Cidade cidade1, cidade2;
    int opcao;

    // Cadastro das cartas (cidade 1)
    printf("Cadastro da Cidade 1:\n");
    printf("Código: ");
    scanf("%s", cidade1.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", cidade1.nome); // permite espaço
    printf("Estado (UF): ");
    scanf("%s", cidade1.estado);
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &cidade1.pontosTuristicos);

    // Cadastro das cartas (cidade 2)
    printf("\nCadastro da Cidade 2:\n");
    printf("Código: ");
    scanf("%s", cidade2.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", cidade2.nome);
    printf("Estado (UF): ");
    scanf("%s", cidade2.estado);
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &cidade2.pontosTuristicos);

    // Escolha do atributo para comparar
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    scanf("%d", &opcao);

    printf("\nResultado da Comparação:\n");

    if (opcao == 1) {
        if (cidade1.populacao > cidade2.populacao)
            printf("%s venceu (maior população).\n", cidade1.nome);
        else if (cidade2.populacao > cidade1.populacao)
            printf("%s venceu (maior população).\n", cidade2.nome);
        else
            printf("Empate em população.\n");
    } else if (opcao == 2) {
        if (cidade1.area > cidade2.area)
            printf("%s venceu (maior área).\n", cidade1.nome);
        else if (cidade2.area > cidade1.area)
            printf("%s venceu (maior área).\n", cidade2.nome);
        else
            printf("Empate em área.\n");
    } else if (opcao == 3) {
        if (cidade1.pib > cidade2.pib)
            printf("%s venceu (maior PIB).\n", cidade1.nome);
        else if (cidade2.pib > cidade1.pib)
            printf("%s venceu (maior PIB).\n", cidade2.nome);
        else
            printf("Empate em PIB.\n");
    } else if (opcao == 4) {
        if (cidade1.pontosTuristicos > cidade2.pontosTuristicos)
            printf("%s venceu (mais pontos turísticos).\n", cidade1.nome);
        else if (cidade2.pontosTuristicos > cidade1.pontosTuristicos)
            printf("%s venceu (mais pontos turísticos).\n", cidade2.nome);
        else
            printf("Empate em pontos turísticos.\n");
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
