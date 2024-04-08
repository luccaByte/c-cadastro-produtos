# Cadastro de produtos

Seu programa deverá armazenar, para um produto, os seguintes dados:

- Nome do produto;
- Marca;
- Tamanho/quantidade (em gramas, ml, etc);
- Preço no estabelecimento 1;
- Preço no estabelecimento 2;
- Preço no estabelecimento 3;
- 
Por exemplo, considere como produto Arroz Branco, Tio Urbano, 5 Kg, cujo preço está R$ 22,75 na Central de Alimentos, R$ 26,80 no Viver Bem Saudável, e R$ 16,99 no Semar Supermercados (dados de cunho ilustrativo, preços pesquisados na Internet em outubro/2022).

Depois que você pesquisar diversos produtos, seu programa deve indicar quais produtos estão mais baratos em qual estabelecimento, fornecendo 3 listas (vetores), cada uma contendo os produtos mais baratos apenas naquele estabelecimento.

### Algumas dicas:

Escolha estabelecimentos de sua cidade ou da Internet.
Utilize ZERO ou R$-1 como preço para produtos que não forem encontrados.
Nomeie os estabelecimentos apenas uma vez, fora da lista. Pesquise apenas nos mesmos estabelecimentos.
Seu programa deve contemplar os seguintes itens:

Crie uma estrutura para armazenar os dados de um produto.
Crie um vetor, para ser possível armazenar os dados de diversos produtos.
Popule os dados de suas variáveis no vetor. Entrar com os dados de sua preferencia no programa faz parte da questão. Crie pelo menos 10 produtos.
Faça uma função que decide qual é o menor preço de um produto.
No main, mostre os resultados chamando a função criada para os dados que você cadastrou na lista/vetor.
Faça um menu com as seguintes opções:

	[1] Inicializar os dados
	[2] Cadastrar um novo produto
	[3] Mostrar os produtos mais baratos – supermercado 1
	[4] Mostrar os produtos mais baratos – supermercado 2
	[5] Mostrar os produtos mais baratos – supermercado 3