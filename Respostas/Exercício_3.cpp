#include <iostream>
#include <vector>

int main()
{
    int num_alunos, nota;
    float media;
    std::cout << "Quantos alunos existem na sua turma? ";
    std::cin >> num_alunos;
    std::vector<int> notas(num_alunos);

    for (int i = 0; i < num_alunos; i++)
    {
        std::cout << "Qual a nota do aluno " << i << "? ";
        std::cin >> nota;
        notas[i] = nota;
    }

    int soma = 0;
    for (int i = 0; i < num_alunos; i++)
    {
        soma += notas[i];
    }
    media = static_cast<float>(soma) / num_alunos;

    std::cout << "A média das notas dos alunos é: " << media << std::endl;

    return 0;
}
