#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int opcao = 10;

    do
    {
        cout << "M E N U" << endl;
        cout << "---------" << endl;
        cout << "[1] De 1 a 10" << endl;
        cout << "[2] De 10 a 1" << endl;
        cout << "[3] Sair" << endl;
        cout << "---------" << endl;

        cin >> opcao;

        if (opcao == 1)
        {
            for (int i = 1; i < 11; i++)
            {
                cout << i << endl;
            }
        }

        else if (opcao == 2)
        {
            for (int i = 10; i > 0; i--)
            {
                cout << i << endl;
            }
        }
    } while (opcao != 3);


    system ("pause");
    return 0;
}