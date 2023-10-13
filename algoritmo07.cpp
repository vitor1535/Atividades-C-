#include <iostream>
#include <string>

using namespace std;

int main ()
{
    float altura, peso, resultado;

    cout << "Insira seu peso" << endl;
    cin >> peso;
    cout << "Insira sua altura" << endl;
    cin >> altura;

    resultado = peso / (altura * altura);
    cout << "IMC = " << resultado << endl;

    system ("pause");
    return 0;
}