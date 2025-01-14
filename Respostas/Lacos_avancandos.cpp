#include<iostream>


int main(){
	int n;
	std::cout << "Digite um número para a tabuada ir: ";
	std::cin >> n;

	for(int i = 1; i <= n; i++)
	{
		std::cout<<"Tabuada do "<< i<<std::endl;
		for(int j = 1; j <= n; j++)
			
			std::cout<<i<<" x "<< j << " = " << i * j <<std::endl; 	
	}
	return 0;
}