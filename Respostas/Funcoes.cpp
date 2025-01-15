#include <iostream>

int soma(int numero1, int numero2)
{
	return numero1 + numero2;
}

int subtrai(int numero1, int numero2)
{
	return numero1 - numero2;
}

int multiplica(int numero1, int numero2)
{
	return numero1 * numero2;
}

int divide(int numero1, int numero2)
{
	if (numero2 != 0)
	{
		return numero1 / numero2;
	}
	else
	{
		std::cout << "O segundo número precisa ser diferente de 0!" << std::endl;
	}
}

int main()
{
	int numero1, numero2;
	std::cout << "Digite o primeiro número: ";
	std::cin >> numero1;

	std::cout << "Digite o segundo número: ";
	std::cin >> numero2;

	char operacao;

	std::cout << "Escolha a operação (+, -, *, /): ";
	std::cin >> operacao;

	if (operacao == '+')
	{
		std::cout << "O resultado de " << numero1 << " + " << numero2 << " é : " << soma(numero1, numero2) << std::endl;
	}
	else if (operacao == '-')
	{
		std::cout << "O resultado de " << numero1 << " - " << numero2 << " é : " << subtrai(numero1, numero2) << std::endl;
	}
	else if (operacao == '*')
	{
		std::cout << "O resultado de " << numero1 << " * " << numero2 << " é : " << multiplica(numero1, numero2) << std::endl;
	}
	else if (operacao == '/')
	{
		std::cout << "O resultado de " << numero1 << " / " << numero2 << " é : " << divide(numero1, numero2) << std::endl;
	}
	else
	{
		std::cout << "Você não digitou uma operação válida!" << std::endl;
	}
	return 0;
}