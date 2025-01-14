#include <iostream>

int main()
{
	int n;
	std::cout << "Quantos números devem existir nesse vetor(array) ? ";
	std::cin >> n;

	int numeros[n];
	int soma = 0;

	for (int i = 0; i < n; i++)
	{
		std::cout << "Digite o número " << i << ":";
		std::cin >> numeros[i];
		soma += numeros[i];
	}

	std::cout << "A média dos números é :" << soma / n << std::endl;
	return 0;
}