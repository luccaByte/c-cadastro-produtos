#include <cstdio>
#include <cfloat>
#include <string>
#pragma warning(disable : 4996)

typedef struct PerfilProduto
{
    char nomeProduto[100];
    char marca[50];
    char quantidade[25];
    float preco[3];
};

PerfilProduto produtos[10];
int produtosCadastrados = 0;

void inicializacao() 
{
    produtosCadastrados = 0;
}

void cadastroProdutos()
{
    if (produtosCadastrados < 10)
    {
        printf("\n***************************************************\n");
        printf("Digite o nome do produto: ");
        scanf("%99s", produtos[produtosCadastrados].nomeProduto);

        printf("Digite a marca do produto: ");
        scanf("%49s", produtos[produtosCadastrados].marca);

        printf("Insira a quantidade (gramas, ml, etc): ");
        scanf("%24s", produtos[produtosCadastrados].quantidade);

        for (int i = 0; i < 3; i++)
        {
            printf("Digite o preco do produto no mercado %d: ", i + 1);
            scanf("%f", &produtos[produtosCadastrados].preco[i]);
        }
        produtosCadastrados++;
        printf("\n***************************************************\n");
    }
    else
    {
        printf("\nLimite de produtos atingido!\n");
    }
}

void calculoProdutos(int mercado)
{
    if (produtosCadastrados == 0)
    {
        printf("Nao ha nenhum produto cadastrado.\n");
        return;
    }

    float menorPreco = FLT_MAX;

    for (int i = 0; i < produtosCadastrados; i++)
    {
        if (produtos[i].preco[mercado] < menorPreco)
        {
            menorPreco = produtos[i].preco[mercado];
        }
    }

    for (int i = 0; i < produtosCadastrados; i++)
    {
        if (produtos[i].preco[mercado] == menorPreco)
        {
            printf("\n******** PRODUTO CADASTRADO ********\n");
            printf("Produto: %s\n", produtos[i].nomeProduto);
            printf("Marca: %s\n", produtos[i].marca);
            printf("Quantidade: %s\n", produtos[i].quantidade);
            printf("Preco: R$ %.2f\n", produtos[i].preco[mercado]);
            printf("************************************\n");
        }
    }
}

void produtosTotais()
{
    if (produtosCadastrados == 0)
    {
        printf("Nao ha produtos cadastrados.\n");
        return;
    }

    printf("\nLista de todos os produtos cadastrados:\n");
    for (int i = 0; i < produtosCadastrados; i++)
    {
        printf("\n******** PRODUTO %d ********\n", i + 1);
        printf("Produto: %s\n", produtos[i].nomeProduto);
        printf("Marca: %s\n", produtos[i].marca);
        printf("Quantidade: %s\n", produtos[i].quantidade);
        for (int mercado = 0; mercado < 3; mercado++)
        {
            printf("Preco no mercado %d: R$ %.2f\n", mercado + 1, produtos[i].preco[mercado]);
        }
        printf("************************************\n");
    }
}

int main()
{
    int menuProdutos;

    do
    {
        printf("\nMenu para cadastro de produtos\n");
        printf("\n***************************************************");
        printf("\n[1] - Inicializar os dados");
        printf("\n[2] - Cadastrar um novo produto");
        printf("\n[3] - Mostrar os produtos mais baratos - Shibata");
        printf("\n[4] - Mostrar os produtos mais baratos - Semar");
        printf("\n[5] - Mostrar os produtos mais baratos - Spani");
        printf("\n[6] - Mostrar todos os produtos cadastrados");
        printf("\n[0] - Sair");
        printf("\n***************************************************\n");
        printf("Escolha uma opcao de 0 a 5: ");
        scanf("%d", &menuProdutos);

        switch (menuProdutos)
        {
        case 1:
            inicializacao();
            printf("\nInicializando os dados. . .\n");
            break;
        case 2:
            cadastroProdutos();
            break;
        case 3:
            calculoProdutos(0);
            break;
        case 4:
            calculoProdutos(1);
            break;
        case 5:
            calculoProdutos(2);
            break;
        case 6:
            produtosTotais();
            break;
        case 0:
            printf("Saindo do programa. . .\n");
            break;
        default:
            printf("\nOpcao invalida. Tente novamente!\n\n");
            break;
        }
    } while (menuProdutos != 0);

    return 0;
}
