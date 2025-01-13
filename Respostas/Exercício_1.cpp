#include <iostream>

int main()
{
    int numero1, numero2, resultado;
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;
    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;
    resultado = numero1 + numero2;
    std::cout << "O resultado da soma é: " << resultado << std::endl;
    return 0;
}