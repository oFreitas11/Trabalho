#ifndef ESTOQUE_H
#define ESTOQUE_H

#define MAX_ITENS 10
#define TAXA_PADRAO 0.05

typedef struct Produto {
    int id;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

void listar_produtos(Produto estoque[], int total_itens);
float calcular_total(Produto estoque[], int total_itens);
void exibir_menu(void);

#endif
