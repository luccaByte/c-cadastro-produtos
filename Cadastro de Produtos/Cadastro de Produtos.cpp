#include <cstdio>
#include <string>
#pragma warning(disable : 4996)

typedef struct PerfilProduto
{
	char nomeProduto[100];
	char marca[50];
	char quantidade[25];
	float preco1, preco2, preco3;
};

PerfilProduto produtos[10];
int produtosCadastrados = 1;

void inicializacao()
{
	produtosCadastrados = 0;
};

void cadastroProdutos()
{
	printf("\nDigite o nome do produto: ");
	scanf("%s", produtos[produtosCadastrados].nomeProduto);

	printf("\nDigite a marca do produto: ");
	scanf("%s", produtos[produtosCadastrados].marca);

	printf("\nInsira a quantidade (gramas, ml, etc): ");
	scanf("%s", produtos[produtosCadastrados].quantidade);

	printf("\nInsira o preco do primeiro produto: ");
	scanf("%f", &produtos[produtosCadastrados].preco1);

	printf("\nInsira o preco do segundo produto: ");
	scanf("%f", &produtos[produtosCadastrados].preco2);

	printf("\nInsira o preco do terceiro produto: ");
	scanf("%f", &produtos[produtosCadastrados].preco3);
};

int main()
{
	int menuProdutos;

	do
	{
		printf("Menu para cadastro de produtos\n");
		printf("\n********************************************************");
		printf("\n[1] - Inicializar os dados");
		printf("\n[2] - Cadastrar um novo produto");
		printf("\n[3] - ");
		printf("\n[4] - ");
		printf("\n[5] - ");
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
			default:
				printf("Opcao invalida. Tente novamente!");
				break;
		}
	} while (menuProdutos != 0);

};