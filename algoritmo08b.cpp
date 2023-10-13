#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int gols1, gols2, resultado;

    cout << "Quantos gols do galao?" << endl;
    cin >> gols1;
    cout << "Quantos gols do palmeiras?" << endl;
    cin >> gols2;

    resultado = gols1 - gols2;

    if (resultado < 0)
    {
        resultado = gols2 - gols1;
    }

    if (resultado >= 1 && resultado <= 2)
    {
        cout << "Diferença = " << resultado << endl;
        cout << "Vitoria normal" << endl;
    }
    else if (resultado >= 3)
    {
        cout << "Diferença = " << resultado << endl;
        cout << "Goleada" << endl;
    }
    else if (resultado == 0)
    {
        cout << "Diferença = " << resultado << endl;
        cout << "Empate" << endl;
    }

    system ("pause");
    return 0;
}