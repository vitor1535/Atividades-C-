#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string times[100];

    cout << "----------------------" << endl;
    cout << "TABELA DE PARTIDAS" << endl;
    cout << "----------------------" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Insira o nome do " << i + 1 << " time: " << endl;
        cin >> times[i];
    }

    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            if (j != i)
            {
                cout << times[i] << " x " << times[j] << endl;
            }
        }
    }

    system ("pause");
    return 0;
}