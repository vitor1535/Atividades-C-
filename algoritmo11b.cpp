#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int valor, soma = 0, divisiveisPor5 = 0, nulos = 0, somaPares = 0;
    float media = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << " valor:";
        cin >> valor;

        soma += valor;
        media += (float) valor / 5;
        if (valor % 5 == 0)
        {
            divisiveisPor5++;
        }
        if (valor == 0)
        {
            nulos++;
        }
        if (valor % 2 == 0)
        {
            somaPares += valor;
        }

    }

    cout << "Soma entre valores = " << soma << endl;
    cout << "Media entre valores = " << media << endl;
    cout << "Valores divisiveis por 5 = " << divisiveisPor5 << endl;
    cout << "Valores nulos = " << nulos << endl;
    cout << "Soma dos valores pares = " << somaPares << endl;

    system ("pause");
    return 0;
}