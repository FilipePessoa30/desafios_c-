#include <iostream>

int main()
{
	int n, soma ;
	std::cout <<"Digite um número para somar até esse número: ";
	std::cin >> n;
	soma = 0;
	for (int i = 0; i <= n; i++){
		soma += i;
	}
	std::cout <<"O valor é:" << soma << std::endl;
	return 0;
}