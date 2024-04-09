#include <cstdio>
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
int produtosCadastrados = 1;

void inicializacao()
{
	produtosCadastrados = 0;
};

void cadastroProdutos()
{
	if (produtosCadastrados < 10)
	{
		printf("\nDigite o nome do produto: ");
		scanf("%s", produtos[produtosCadastrados].nomeProduto);

		printf("\nDigite a marca do produto: ");
		scanf("%s", produtos[produtosCadastrados].marca);

		printf("\nInsira a quantidade (gramas, ml, etc): ");
		scanf("%s", produtos[produtosCadastrados].quantidade);

		printf("\nDigite o preco do produto no super-mercado Shibata: ");
		scanf("%f", &produtos[produtosCadastrados].preco[0]);

		printf("\nDigite o preco do produto no super-mercado Semar: ");
		scanf("%f", &produtos[produtosCadastrados].preco[1]);

		printf("\nDigite o preco do produto no super-mercado Spani: ");
		scanf("%f", &produtos[produtosCadastrados].preco[2]);
	}
	else
	{
		printf("Limite de produtos atingido.\n");
	}
};

int calculoMenorPreco(PerfilProduto produto)
{
	int calculo = 0;

	for (int i = 0; i < 3; i++)
	{
		if (produto.preco[i] < produto.preco[calculo])
		{
			calculo = i;
		};
	};

	return calculo;
};

int main()
{
	int menuProdutos;

	do
	{
		printf("\nMenu para cadastro de produtos\n");
		printf("\n********************************************************");
		printf("\n[1] - Inicializar os dados");
		printf("\n[2] - Cadastrar um novo produto");
		printf("\n[3] - Mostrar os produtos mais baratos - Shibata");
		printf("\n[4] - Mostrar os produtos mais baratos - Semar");
		printf("\n[5] - Mostrar os produtos mais baratos - Spani");
		printf("\n[0] - Sair");
		printf("\n********************************************************\n");
		printf("\nEscolha uma opcao de 0 a 5: ");
		scanf("%d", &menuProdutos);

		switch (menuProdutos)
		{
			case 1:
				inicializacao();
				break;
			case 2:
				cadastroProdutos();
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 0:
				printf("Saindo do programa. . .");
				break;
			default:
				printf("\nOpcao invalida. Tente novamente!\n\n");
				break;
		}
	} while (menuProdutos != 0);

};