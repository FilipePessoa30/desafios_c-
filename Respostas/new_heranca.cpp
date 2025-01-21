#include <iostream>
#include <string>

class Animal
{
public:
    std::string nome;
    int idade;

    // Construtor
    Animal(std::string nome, int idade)
    {
        this->nome = nome;
        this->idade = idade;
    }

    // Método virtual
    virtual void emitirSom()
    {
        std::cout << "Eu não sei que som esse animal faz!" << std::endl;
    }

    // Destrutor virtual
    virtual ~Animal() {}
};

class Cachorro : public Animal
{
public:
    Cachorro(std::string nome, int idade) : Animal(nome, idade) {} // Construtor da classe base

    void emitirSom() override
    {
        std::cout << "Cachorro: " << nome << std::endl;
        std::cout << "Idade: " << idade << std::endl;
        std::cout << "Som: Au Au!" << std::endl;
    }
};

class Gato : public Animal
{
public:
    Gato(std::string nome, int idade) : Animal(nome, idade) {} // Construtor da classe base

    void emitirSom() override
    {
        std::cout << "Gato: " << nome << std::endl;
        std::cout << "Idade: " << idade << std::endl;
        std::cout << "Som: Miau!" << std::endl;
    }
};

class Passaro : public Animal
{
public:
    Passaro(std::string nome, int idade) : Animal(nome, idade) {} // Construtor da classe base

    void emitirSom() override
    {
        std::cout << "Pássaro: " << nome << std::endl;
        std::cout << "Idade: " << idade << std::endl;
        std::cout << "Som: Piu Piu!" << std::endl;
    }
};

int main()
{
    // Criando objetos
    Gato a("Dark", 4);
    Cachorro b("Bruce", 5);
    Passaro c("Piriquito", 2);

    // Chamando os métodos
    a.emitirSom();
    b.emitirSom();
    c.emitirSom();

    return 0;
}
