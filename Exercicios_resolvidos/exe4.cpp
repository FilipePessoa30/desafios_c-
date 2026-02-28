#include <iostream>
#include <vector>
#include <iomanip>

long long soma(const std::vector<int> &v)
{
    long long soma = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        soma += v[i];
    }
    return soma;
}

int contarPositivos(const std::vector<int> &v)
{
    int positivos = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            positivos += 1;
        }
    }
    return positivos;
}

double media(const std::vector<int> &v)
{
    if (v.empty())
    {
        return 0.0;
    }
    return (soma(v) * 1.00) / v.size();
}

int main()
{

    std::vector<int> vetor = {};

    int continuar = 0;

    std::cout << "Quantos números irá inserir? ";
    std::cin >> continuar;

    while (true)
    {
        int numero;

        std::cout << "Digite o número: ";
        std::cin >> numero;
        vetor.push_back(numero);

        continuar--;
        if (continuar == 0)
        {
            break;
        }
        else
        {
            continue;
        }
    }

    std::cout << "A soma total é " << soma(vetor) << ", a média é " << std::fixed << std::setprecision(2)
              << media(vetor) << ", e o número de positivos é " << contarPositivos(vetor) << "\n";

    return 0;
}