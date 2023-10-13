#include <iostream>
#include <string>

using namespace std;


void interfaceMenu()
{
    cout << "MENU DE OPCOES" << endl;
    cout << "--------------------------" << endl;
    cout << "[1] Mostrar a matriz" << endl;
    cout << "[2] Diagonal principal" << endl;
    cout << "[3] Triangulo superior" << endl;
    cout << "[4] Triangulo inferior" << endl;
    cout << "[5] Sair" << endl;
}

int main ()
{
    int x;

    int valor;
    int matriz[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Digite o valor para a posicao [" << i + 1 << ", " << j + 1 << "]" << endl;
            cin >> valor;
            matriz[i][j] = valor;
        }
    }

    cout << "MENU DE OPCOES" << endl;
    cout << "--------------------------" << endl;
    cout << "[1] Mostrar a matriz" << endl;
    cout << "[2] Diagonal principal" << endl;
    cout << "[3] Triangulo superior" << endl;
    cout << "[4] Triangulo inferior" << endl;
    cout << "[5] Sair" << endl;

    cin >> x;

    do
    {
    switch (x)
    {
    case 1:

    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << matriz[i][j] << "   ";
            }
            cout << endl;
        }

        interfaceMenu();
        cin >> x;

    break;  

    case 2:

    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i == j)
                {
                    cout << matriz[i][j] << "     ";
                }
                else
                {
                    cout << "     "; 
                }
            }
            cout << endl;
        }

        interfaceMenu();
        cin >> x;

    break;

    case 3:

    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (j > i)
                {
                    cout << matriz[i][j] << "     ";
                }
                else
                {
                    cout << "     "; 
                }
            }
            cout << endl;
        }

        interfaceMenu();
        cin >> x;

    break;  

    case 4:

    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i > j)
                {
                    cout << matriz[i][j] << "     ";
                }
                else
                {
                    cout << "     "; 
                }
            }
            cout << endl;
        }

        interfaceMenu();
        cin >> x;

    break;

    case 5:

    break;
    }
    }while (x != 5);
        
    system ("pause");
    return 0;
}