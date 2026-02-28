#include <iostream>
#include <iomanip>

int main()
{

	int a, b;

	std::cout << "Digite os números: ";
	std::cin >> a >> b;

	if (b == 0)
	{
		std::cout << "Você colocou uma entrada inválida! (b deve ser diferente de 0)";
	}
	else
	{
		int quociente = a / b;
		int resto = a % b;
		double casasDecimais = a * 1.00 / b;

		std::cout << "O quociente é " << quociente << ", o resto é " << resto
				  << ", e o resultado com 3 casas decimais é " << std::fixed
				  << std::setprecision(3) << casasDecimais;
	}

	return 0;
}
