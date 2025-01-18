#include <iostream>
#include <string>

class Funcionario{
public:
	std::string nome;
	double salario;


	//Construtor
	Funcionario(std::string nome, double salario){
		this -> nome = nome;
		this -> salario = salario;
	}

	virtual void exibir_informacoes(){
		std::cout << "Funcionário: " << nome << std::endl;
		std::cout << "Salário R$ : " << salario << std::endl;
	}

	// Virtual destrutor (opcional em hierarquias)
    virtual ~Funcionario() {}
};

class Gerente: public Funcionario {
public:
	double bonus;


	//Construtor
	Gerente(std::string nome, double salario, double bonus): Funcionario(nome,salario){
		this -> bonus = bonus;
	}

	void exibir_informacoes() override {
		std::cout << "Gerente: " << nome << std::endl;
		std::cout << "Salário base R$: " << salario << std::endl;
		std::cout << "Bônus R$ : " << bonus << std::endl;
		std::cout << "Salário total R$ : " << salario + bonus << std::endl;
	}
};


int main(){
	Funcionario a("Pedro", 3000.0);
	Funcionario b("Bernardo", 1900.0);
	Gerente c("Ana", 5000.0, 2000.0);

	a.exibir_informacoes();
	b.exibir_informacoes();
	c.exibir_informacoes();


	return 0;
}