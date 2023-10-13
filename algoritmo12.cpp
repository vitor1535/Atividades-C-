#include <iostream>
#include <string>

using namespace std;

int* algoritmo12()
{
    static int retorno[100];

    int valor, soma = 0, divisiveisPor5 = 0, nulos = 0, somaPares = 0;
    int media = 0;

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

    retorno[0] = soma;
    retorno[1] = media;
    retorno[2] = divisiveisPor5;
    retorno[3] = nulos;
    retorno[4] = somaPares;


    return retorno;
}

int main ()
{
    int* callfunc;
    callfunc = algoritmo12();

    cout << "Soma entre valores = " << callfunc[0] << endl;
    cout << "Media entre valores = " << callfunc[1] << endl;
    cout << "Valores divisiveis por 5 = " << callfunc[2] << endl;
    cout << "Valores nulos = " << callfunc[3] << endl;
    cout << "Soma dos valores pares = " << callfunc[4] << endl;

    system ("pause");
    return 0;
}