#include <iostream>
#include <string>
#include <vector>

class Produto
{
public:
	std::string nome;
	double preco;

	// Construtor
	Produto(std::string nome, double preco)
	{
		this->nome = nome;
		this->preco = preco;
	}

	virtual void exibirInformacoes()
	{
		std::cout << "Produto: " << nome << std::endl;
		std::cout << "Preço: R$ " << preco << std::endl;
	}

	virtual ~Produto()
	{
		std::cout << "Destrutor do Produto chamado!" << std::endl;
	}
};

class Eletronico : public Produto
{
public:
	int garantia;

	// Construtor
	Eletronico(std::string nome, double preco, int garantia) : Produto(nome, preco)
	{
		this->garantia = garantia;
	}

	void exibirInformacoes() override
	{
		std::cout << "Eletronico: " << nome << std::endl;
		std::cout << "Preço: R$ " << preco << std::endl;
		std::cout << "Garantia: " << garantia << std::endl;
	}

	virtual ~Eletronico()
	{
		std::cout << "Destrutor do Eletronico chamado!" << std::endl;
	}
};

class Alimento : public Produto
{
public:
	std::string validade;

	// Construtor
	Alimento(std::string nome, double preco, std::string validade) : Produto(nome, preco)
	{
		this->validade = validade;
	}

	void exibirInformacoes() override
	{
		std::cout << "Alimento: " << nome << std::endl;
		std::cout << "Preço: R$ " << preco << std::endl;
		std::cout << "Validade: " << validade << std::endl;
	}

	virtual ~Alimento()
	{
		std::cout << "Destrutor do Alimento chamado!" << std::endl;
	}
};

int main()
{
	std::vector<Produto *> produtos;

	Produto *produto1 = new Produto("Mel", 12);
	Produto *eletronico1 = new Eletronico("Smarthphone", 1300, 2);
	Produto *alimento1 = new Alimento("Maça", 2, "11/12/2025");

	produtos.push_back(produto1);
	produtos.push_back(eletronico1);
	produtos.push_back(alimento1);

	// Exibindo informações dos produtos
	for (Produto *p : produtos)
	{
		p->exibirInformacoes();
	}

	// Desalocando memória
	for (Produto *p : produtos)
	{
		delete p;
	}

	return 0;
}