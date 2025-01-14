#include <iostream>

int main()
{
	std::string nome = "Filipe";
	int idade = 31;
	double altura = 1.80;
	std::string estado_civil = "Solteiro";
	bool gosta_programar = true;

	std::cout << "Meu nome é " << nome << "." << std::endl;
	std::cout << "Tenho " << idade << " anos, " << altura << " metros de altura, e sou " << estado_civil << "." << std::endl;
	std::cout << "Gosto de programação ? " << (gosta_programar ? "Sim" : "Não") << std::endl;

	return 0;
}