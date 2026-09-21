#include <stdio.h>
#include <string.h>
#include "estoque.h"

void listar_produtos(Produto estoque[], int total_itens) {
    printf("\n=== PRODUTOS EM ESTOQUE ===\n");

    for (int i = 0; i < total_itens; i++) {
        printf("ID: %d | Nome: %s | Quantidade: %d | Preco: R$ %.2f\n",
               estoque[i].id,
               estoque[i].nome,
               estoque[i].quantidade,
               estoque[i].preco);
    }
}

float calcular_total(Produto estoque[], int total_itens) {
    float total = 0.0f;

    for (int i = 0; i < total_itens; i++) {
        total += estoque[i].preco;
    }

    return total;
}

void exibir_menu(void) {
    printf("\n=== CONTROLE DE ESTOQUE ===\n");
    printf("1 - Listar produtos\n");
    printf("2 - Exibir total em estoque\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main(void) {
    Produto estoque[MAX_ITENS];
    int total_itens = 2;
    int opcao;

    estoque[0].id = 1;
    strcpy(estoque[0].nome, "Caderno");
    estoque[0].quantidade = 10;
    estoque[0].preco = 15.50f;

    estoque[1].id = 2;
    strcpy(estoque[1].nome, "Caneta");
    estoque[1].quantidade = 20;
    estoque[1].preco = 3.00f;

    do {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listar_produtos(estoque, total_itens);
                break;

            case 2:
                printf("\nTotal em estoque: R$ %.2f\n",
                       calcular_total(estoque, total_itens));
                break;

            case 0:
                printf("\nEncerrando o sistema...\n");
                break;

            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
