#include <iostream>
#include <string>

class Estudante
{
public:
	std::string nome;
	int idade;
	double nota;

	// Construtor
	Estudante(std::string nome, int idade, double nota)
	{
		this->nome = nome;
		this->idade = idade;
		this->nota = nota;
	}

	// Métodos
	void exibir_informacoes()
	{
		std::cout << "Estudante: " << nome << std::endl;
		std::cout << "Idade: " << idade << std::endl;
		std::cout << "Nota final: " << nota << std::endl;
	}

	~Estudante()
	{
		std::cout << "Objeto destruído: " << nome << std::endl;
	}
};

int main()
{
	Estudante a("Ana", 20, 9.5);
	Estudante b("João", 22, 8.0);
	Estudante c("Clara", 19, 7.8);

	a.exibir_informacoes();
	b.exibir_informacoes();
	c.exibir_informacoes();

	return 0;
}