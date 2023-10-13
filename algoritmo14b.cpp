#include <iostream>
#include <string>

using namespace std;

int main ()
{
    char gabarito[100];
    string aluno[100];
    char resposta[100];
    int nota[100];
    int auxiliar = 0;
    int mediaTurma = 0;

    cout << "----------------------" << endl;
    cout << "CADASTRO DE GABARITO" << endl;
    cout << "----------------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Questao " << i + 1 << ": " << endl;
        cin >> gabarito[i];
    }

    for (int i = 0; i < 3; i++)
    {
        int auxiliar = 0;

        cout << "----------------------" << endl;
        cout << "ALUNO " << i + 1 << endl;
        cout << "----------------------" << endl;
   
        cout << "Nome: " << endl;
        cin >> aluno[i];
        cout << "RESPOSTAS DADAS" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Questao " << i+1 << endl;
            cin >> resposta[i];
            if (resposta[i] == gabarito [i])
            {
                auxiliar = auxiliar + 2;
            }
        }

        nota[i] = auxiliar;
    }

    for (int i = 0; i < 3; i++)
    {
        mediaTurma += nota[i];
    }
    mediaTurma  = mediaTurma/ 3;

    cout << "NOTAS FINAIS" << endl;
    cout << "----------------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << aluno[i] << "    " << nota[i] << endl;
    }
    cout << "----------------------" << endl;
    cout << "Media da turma = " << mediaTurma << endl;

    system ("pause");
    return 0;
}