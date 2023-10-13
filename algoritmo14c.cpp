#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string cadeira[100];
    string escolha;
    string ocupado[100];
    char resposta;
    
    cadeira[0] = "[B1]";
    cadeira[1] = "[B2]";
    cadeira[2] = "[B3]";
    cadeira[3] = "[B4]";
    cadeira[4] = "[B5]";
    cadeira[5] = "[B6]";
    cadeira[6] = "[B7]";
    cadeira[7] = "[B8]";
    cadeira[8] = "[B9]";
    cadeira[9] = "[B10]";

    for (int i = 0; i < 10; i++)
    {
        cout << cadeira[i];
    }

    cout << endl << "--------------------------" << endl;

    while (resposta != 'n')
    {
        int i = 0;

        cout << "Reservar a cadeira: " << endl;
        cin >> escolha;

        for (int i = 0; i < 10; i++)
        {
            if (escolha == cadeira[i])
            {
                cadeira[i] = "[---]";
                cout << escolha << "RESERVADA" << endl;
                ocupado[i] = escolha;

            }
            else if (escolha == ocupado[i])
            {
                cout <<"ERRO: Local ocupado!" << endl;
            }
        }

        for (int i = 0; i < 10; i++)
        {
            cout << cadeira[i];
        }

        cout << "Quer reservar outro? [S/N]";
        cin >> resposta;

        if (resposta == 'n')
        {
            break;
        }       
    }

    system ("pause");
    return 0;
}