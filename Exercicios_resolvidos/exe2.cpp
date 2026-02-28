#include <iostream>

int main()
{
    long long int x, y, z;
    std::cout << "Digite os três números até 10^9: ";
    std::cin >> x >> y >> z;

    long long int resultado = (x * y) + z;

    std::cout << "O resultado é :" << resultado << "\n";

    return 0;
}
