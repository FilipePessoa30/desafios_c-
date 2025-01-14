#include <iostream>

int main()
{
	int n;
	std::cout << "Digite um número para somar de 0 até ele: ";
	std::cin >> n;

	int soma = 0;

	for (int i = 1; i <= n; i++)
	{
		soma += i;
	}

	std::cout << "A soma dos números de 1 a " << n << " é : " << soma << std::endl;
	return 0;
}