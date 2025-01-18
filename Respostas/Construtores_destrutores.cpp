#include <iostream>
#include <string>

class Produto {
public:
    std::string nome_produto;
    double preco;
    int quantidade_estoque;

    // Construtor
    Produto(std::string nome, double preco, int quantidade) {
        this->nome_produto = nome;
        this->preco = preco;
        this->quantidade_estoque = quantidade;
    }

    // Método para exibir informações
    void informacoes() {
        std::cout << "Produto: " << nome_produto << std::endl;
        std::cout << "Preço em R$: " << preco << std::endl;
        std::cout << "Quantidade em estoque: " << quantidade_estoque << std::endl;
    }

    // Método para calcular valor total
    void valor_total() {
        std::cout << "Valor total em estoque: " << preco * quantidade_estoque << std::endl;
    }

    // Destrutor
    ~Produto() {
        std::cout << "Objeto destruído: " << nome_produto << std::endl;
    }
};

int main() {
    Produto p("Smartphone", 2000, 10); // Usando o construtor
    Produto x("Laptop", 4500, 20);

    p.informacoes();
    p.valor_total();
    x.informacoes();
    x.valor_total();

    return 0;
}
