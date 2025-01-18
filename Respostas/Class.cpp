#include <iostream>
#include <string>

class Produto
{
public:
	std::string nome_produto;
	double preco;
	int quantidade_estoque;

	void informacaoes()
	{
		std::cout << "Produto: " << nome_produto << std::endl;
		std::cout << "Preço em R$: " << preco << std::endl;
		std::cout << "Quantidade em estoque:  " << quantidade_estoque << std::endl;
	}
	void valor_total()
	{
		std::cout << "Valor total em estoque: " << preco * quantidade_estoque << std::endl;
	}
};

int main()
{
	Produto p;
	p.nome_produto = "Smarthphone";
	p.preco = 2000;
	p.quantidade_estoque = 10;
	Produto x;
	x.nome_produto = "Laptop";
	x.preco = 4500;
	x.quantidade_estoque = 20;

	p.informacaoes();
	p.valor_total();
	x.informacaoes();
	x.valor_total();

	return 0;
}