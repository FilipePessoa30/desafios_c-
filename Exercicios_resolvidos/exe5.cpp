#include <iostream>
#include <vector>    // Para usar vetores
#include <utility>   // Para std::pair
#include <algorithm> // Para std::minmax_element
#include <limits>    // Para lidar com vetores vazios

long long soma(const std::vector<int> &v)
{
    if (v.empty())
    {
        return 0;
    }
    long long soma = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        soma += v[i];
    }
    return soma;
}

int contar(const std::vector<int> &v, int alvo)
{
    if (v.empty())
    {
        return 0;
    }
    int contador = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (alvo == v[i])
        {
            contador += 1;
        }
    }
    return contador;
}

std::pair<int, int> minmax(const std::vector<int> &v)
{
    if (v.empty())
    {
        return {0, 0};
    }
    // Usando algoritmos STL para eficiência
    auto result = std::minmax_element(v.begin(), v.end());

    // result.first é um iterador para o mínimo, second para o máximo
    return {*result.first, *result.second};
}

int main()
{

    std::vector<int> v;
    int tamanho;

    std::cout << "Quantos números irá adicionar? ";
    std::cin >> tamanho;

    for (int i = 1; i <= tamanho; i++)
    {
        int numero;

        std::cout << "Digite o valor do " << i << "º número: ";
        std::cin >> numero;
        v.push_back(numero);
    }

    int alvo;

    std::cout << "Qual número quer encontrar? ";
    std::cin >> alvo;

    std::pair<int, int> mm = minmax(v);

    std::cout << "A soma dos números é igual a " << soma(v) << ", o mínimo foi " << mm.first
              << ", e o máximo foi " << mm.second << ", e o número de vezes que o " << alvo << ", apareceu foi "
              << contar(v, alvo) << "\n";

    return 0;
}