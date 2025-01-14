#include <iostream>

int main()
{
	double massa, altura, resultado;
	std::cout << "Digite seu peso (kg): ";
	std::cin >> massa;
	std::cout << "Digite sua altura (m): ";
	std::cin >> altura;
	resultado = massa / (altura * altura);
	if (resultado < 18.5)
	{
		std::cout << "Seu IMC é " << resultado << ".Classificação: Abaixo do peso.";
	}
	else if (resultado >= 18.5 && resultado < 24.9)
	{
		std::cout << "Seu IMC é " << resultado << ".Classificação: Peso normal.";
	}
	else if (resultado > 25 && resultado < 29.9)
	{
		std::cout << "Seu IMC é " << resultado << ".Classificação: Sobrepeso.";
	}
	else
	{
		std::cout << "Seu IMC é " << resultado << ".Classificação: Obesidade.";
	}
	return 0;
}