#include <iostream>

int main()
{
	double massa, altura, resultado;
	std::cout << "Digite seu peso (kg): ";
	std::cin >> massa;
	std::cout << "Digite sua altura (m): ";
	std::cin >> altura;
	resultado = massa / (altura * altura);
	std::cout << "Seu IMC é " << resultado << ". Classificação: " << (resultado < 18.5 ? "Abaixo do peso" : (resultado >= 18.5 && resultado < 24.9 ? ".Classificação: Peso normal." : (resultado > 25 && resultado < 29.9 ? ".Classificação: Sobrepeso." : ".Classificação: Obesidade."))) << std::endl;

	return 0;
}