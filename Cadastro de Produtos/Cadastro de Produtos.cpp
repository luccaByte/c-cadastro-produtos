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
// contador
int produtosCadastrados = 0;

void inicializacao() {
    produtosCadastrados = 0;
}

void cadastroProdutos() 
{
    if (produtosCadastrados < 10) 
    {
        printf("\n***************************************************\n");
        printf("Digite o nome do produto: ");
        scanf("%s", produtos[produtosCadastrados].nomeProduto);

        printf("Digite a marca do produto: ");
        scanf("%s", produtos[produtosCadastrados].marca);

        printf("Insira a quantidade (gramas, ml, etc): ");
        scanf("%s", produtos[produtosCadastrados].quantidade);

        printf("Digite o preco do produto no super-mercado Shibata: ");
        scanf("%f", &produtos[produtosCadastrados].preco[0]);

        printf("Digite o preco do produto no super-mercado Semar: ");
        scanf("%f", &produtos[produtosCadastrados].preco[1]);

        printf("Digite o preco do produto no super-mercado Spani: ");
        scanf("%f", &produtos[produtosCadastrados].preco[2]);
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

    int calculo = 0;
    float menorPreco = FLT_MAX;

    for (int i = 0; i < produtosCadastrados; i++) 
    {
        if (produtos[i].preco[mercado] < menorPreco) 
        {
            menorPreco = produtos[i].preco[mercado];
            calculo = i;
        }
    }

    printf("\n******** PRODUTO CADASTRADO ********\n");
    printf("\nProduto: %s ",produtos[calculo].nomeProduto);
    printf("\nMarca: %s", produtos[calculo].marca);
    printf("\nQuantidade (kg, g, l): %s", produtos[calculo].quantidade);
    printf("\nPreco: R$ %.2f\n", produtos[calculo].preco[mercado]);
    printf("\n************************************\n");
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
        printf("\n[0] - Sair");
        printf("\n***************************************************\n");
        printf("Escolha uma opcao de 0 a 5: ");
        scanf("%d", &menuProdutos);

        switch (menuProdutos) 
        {
            case 1:
                printf("\nInicializando os dados. . .\n");
                inicializacao();
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
