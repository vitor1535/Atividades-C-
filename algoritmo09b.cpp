#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int qtdAlunos, melhorAluno;
    int contador = 0;
    int maior = 0;
    int notas[100];
    string alunos[100];

    cout << "Quanto alunos a turma tem?" << endl;
    cin >> qtdAlunos;

    while (contador < qtdAlunos)
    {
        cout << "ALUNO " << contador + 1 << endl;
        cout << "Nome do aluno: " << endl;
        cin >> alunos[contador];
        cout << "Nota do aluno: " << endl;
        cin >> notas[contador];
        contador++;
    }

    contador = 0;

    while (contador < qtdAlunos)
    {
        if (notas[contador] >= maior)
        {
            maior = notas[contador];
            melhorAluno = contador;
        }
        contador++;
    }

    cout << "O melhor aproveitamento foi o de " << alunos[melhorAluno] << " com a nota " << maior << endl;

    system ("pause");
    return 0;
}