#include <iostream>
#include <iomanip>

int main()
{

    int limite;

    std::cout << "Quantos números serão inseridos: ";
    std::cin >> limite;

    int n[limite];
    long long int soma = 0;
    int qtItens = 0;
    int negativos = 0;
    int positivos = 0;
    int zeros = 0;

    for (int i = 1; i <= limite; i++)
    {
        std::cout << "Digite o " << i << "° número: ";
        std::cin >> n[i - 1];
        soma += n[i - 1];
        qtItens += 1;
        if (n[i - 1] > 0)
        {
            positivos += 1;
        }
        else if (n[i - 1] < 0)
        {
            negativos += 1;
        }
        else
        {
            zeros += 1;
        }
    }

    std::cout << "A soma total é " << soma << ", a média é " << std::fixed << std::setprecision(2) << soma * 1.00 / qtItens
              << ", temos " << positivos << " números positivos, " << negativos << " números negativos, e " << zeros << " números zeros.";
    return 0;
}