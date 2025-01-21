#include <iostream>
#include <string>

class Veiculo
{
public:
	std::string marca;
	int ano;

	// Construtor
	Veiculo(std::string marca, int ano)
	{
		this->marca = marca;
		this->ano = ano;
	}

	virtual void exibirInformacoes()
	{
		std::cout << "Não tenho informações sobre esse tipo de veiculo!" << std::endl;
	}

	virtual ~Veiculo()
	{
		std::cout << "Destrutor do Veiculo chamado!" << std::endl;
	}
};

class Carro : public Veiculo
{
public:
	int quantidadeDePortas;

	// Construtor
	Carro(std::string marca, int ano, int quantidadeDePortas) : Veiculo(marca, ano)
	{
		this->quantidadeDePortas = quantidadeDePortas;
	}

	void exibirInformacoes() override
	{
		std::cout << "Carro: " << std::endl;
		std::cout << "Marca :" << marca << std::endl;
		std::cout << "Ano :" << ano << std::endl;
		std::cout << "Portas: " << quantidadeDePortas << std::endl;
	}
};

class Moto : public Veiculo
{
public:
	bool temBauleto;

	// Construtor
	Moto(std::string marca, int ano, bool temBauleto) : Veiculo(marca, ano)
	{
		this->temBauleto = temBauleto;
	}

	void exibirInformacoes() override
	{
		std::cout << "Moto: " << std::endl;
		std::cout << "Marca :" << marca << std::endl;
		std::cout << "Ano :" << ano << std::endl;
		std::cout << "Bauleto: " << (temBauleto ? "Sim" : "Não") << std::endl;
	}
};

int main()
{

	Carro a("Toyota", 2022, 4);
	Moto b("Honda", 2020, true);

	a.exibirInformacoes();
	b.exibirInformacoes();

	return 0;
}